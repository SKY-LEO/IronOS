#include "OperatingModes.h"
OperatingMode gui_SettingsMenu(const ButtonState buttons, guiContext *cxt) {
  // Render out the current settings menu
  // State 1 -> Root menu
  // State 2 -> Sub entry
  uint16_t *mainEntry = &(cxt->scratch_state.state1);
  uint16_t *subEntry  = &(cxt->scratch_state.state2);

  return OperatingMode::HomeScreen;
}