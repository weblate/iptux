#include "gtest/gtest.h"

#include "iptux-core/TestHelper.h"
#include "iptux/Application.h"
#include "iptux/DataSettings.h"

using namespace std;
using namespace iptux;

TEST(DataSettings, Constructor) {
  gtk_init(nullptr, nullptr);
  auto config = newTestIptuxConfig();
  Application app(config);
  app.startup();
  app.activate();

  DataSettings::ResetDataEntry(nullptr, false);
}
