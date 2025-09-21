#if defined(BETTER_DRAGSCROLL) // any condition requiring a pointing_device_task_user
  #pragma once

    // mouse_jiggler removed: no includes

  report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    #if defined(BETTER_DRAGSCROLL)
      #if defined(PLOOPY_MSGESTURE_ENABLE) && defined(DEFERRED_EXEC_ENABLE)
        pointing_device_task_mouse_gesture(mouse_report);
      #endif // defined(PLOOPY_MSGESTURE_ENABLE) && defined(DEFERRED_EXEC_ENABLE)
      mouse_report = pointing_device_task_better_dragscroll(mouse_report);
    #endif
    return mouse_report;
  }

#endif // BETTER_DRAGSCROLL (all)
