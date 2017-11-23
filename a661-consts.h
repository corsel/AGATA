#ifndef _A661_CONSTS_H_INCLUDED
#define _A661_CONSTS_H_INCLUDED

/*
This file defines the constant hex values utilized in ARINC661 standard.
*/

namespace A661Const
{
  // TODO: Enums below are to be completed. Refer to chapter 4.6 of ARINC661 document. 
  enum class A661Constant8Bit
  {
    // Block Codes
    A661_BEGIN_LAYER_BLOCK  = 0xA0,
    A661_BEGIN_BLOCK        = 0xB0,
    A661_END_LAYER_BLOCK    = 0xC0,
    A661_END_BLOCK          = 0xD0,
    A661_DF_FOOTER          = 0xE0,
    A661_BEGIN_SYMBOL_BLOCK = 0xF0,
    A661_END_SYMBOL_BLOCK   = 0xF8,

    // Boolean
    A661_FALSE = 0x00,
    A661_TRUE  = 0x01
  };

  enum class A661Constant16Bit
  {
    A661_DF_MAGIC_NUMBER = 0xA661,

    // Commands                
    A661_CMD_CREATE        = 0xCA01,
    A661_CMD_SET_PARAMETER = 0xCA02,
    A661_CMD_UA_REQUEST    = 0xCA03,
    A661_CMD_CREATE_SYMBOL = 0xCA04,

    // Notifications
    A661_NOTIFY_WIDGET_EVENT = 0xCC01,
    A661_NOTIFY_LAYER_EVENT  = 0xCC02,
    A661_NOTIFY_EXCEPTION    = 0xCC03,

    // Widgets                 
    A661_BASIC_CONTAINER = 0xA020,
    A661_GP_ARC_CIRCLE   = 0xA0F0,
    A661_GP_ARC_ELLIPSE  = 0xA100,
    A661_GP_CROWN        = 0xA110,
    A661_GP_LINE         = 0xA120,

    // Parameter Types         
    A661_ENABLE      = 0xB180,
    A661_COLOR_INDEX = 0xB160,
    A661_FILL_INDEX  = 0xB1E0,
    A661_POS_X       = 0xB300,
    A661_POS_Y       = 0xB310,
    A661_RADIUS      = 0xB3F0,
    A661_SIZE_X      = 0xB450,
    A661_SIZE_Y      = 0xB460,
    A661_START_ANGLE = 0xB480,
    A661_STYLE_SET   = 0xB4B0,
    A661_VISIBLE     = 0xB530,

    // Event Types
    A661_EVT_CURSOR_POS_CHANGE = 0xE010,
    A661_EVT_STATE_CHANGE      = 0xE070,
    A661_EVT_VALUE_CHANGE      = 0xE0C0
  };
}
#endif // _A661_CONSTS_H_INCLUDED