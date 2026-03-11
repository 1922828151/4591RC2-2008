/*
 * func-name: sub_10017EF0
 * func-address: 0x10017ef0
 * callers: 0x100184b0, 0x100185c0, 0x10018780, 0x10018c70, 0x10018e80, 0x10018ef0, 0x10018f80, 0x10019140, 0x100195f0, 0x10019bc0, 0x10019d70, 0x10019f20, 0x1001a8c0, 0x1001a9a0, 0x1001ae80, 0x1001aff0, 0x1001b070, 0x1001b0b0, 0x1001b160, 0x1001b280, 0x1001b440, 0x1001b980, 0x1001bb90, 0x1001bc10, 0x1001bca0, 0x1001be60, 0x1001c330, 0x1001c910, 0x1001cac0, 0x1001cc70, 0x1001d5d0, 0x1001d6b0, 0x1001db90, 0x1001dd00, 0x1001dd90, 0x1001dde0
 * callees: none
 */

int __usercall sub_10017EF0@<eax>(char a1@<al>, unsigned __int8 a2@<cl>)
{
  int result; // eax

  switch ( a1 )
  {
    case -40:
    case -39:
    case -38:
    case -37:
      result = 7;
      break;
    case -36:
    case -35:
    case -34:
    case -33:
      result = 8;
      break;
    case -1:
      if ( a2 < 0xFEu )
        goto LABEL_6;
      result = 0;
      break;
    default:
LABEL_6:
      result = 29;
      break;
  }
  return result;
}
