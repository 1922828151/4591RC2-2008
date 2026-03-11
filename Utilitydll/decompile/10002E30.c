/*
 * func-name: ?realloc@Sect_Block_Allocator@Utility@Outpop@@QAEPAXPAXI@Z
 * func-address: 0x10002e30
 * callers: 0x1000f830
 * callees: none
 */

char *__thiscall Outpop::Utility::Sect_Block_Allocator::realloc(
        Outpop::Utility::Sect_Block_Allocator *this,
        char *a2,
        unsigned int a3)
{
  char *result; // eax

  result = a2 - 1;
  switch ( *(a2 - 1) )
  {
    case 0:
      if ( a3 >= 0x10 )
        goto LABEL_27;
      break;
    case 1:
      if ( a3 >= 0x20 )
        goto LABEL_27;
      break;
    case 2:
      if ( a3 >= 0x40 )
        goto LABEL_27;
      break;
    case 3:
      if ( a3 >= 0x80 )
        goto LABEL_27;
      break;
    case 4:
      if ( a3 >= 0x100 )
        goto LABEL_27;
      break;
    case 5:
      if ( a3 >= 0x200 )
        goto LABEL_27;
      break;
    case 6:
      if ( a3 >= 0x400 )
        goto LABEL_27;
      break;
    case 7:
      if ( a3 >= 0x800 )
        goto LABEL_27;
      break;
    case 8:
      if ( a3 >= 0x1000 )
        goto LABEL_27;
      break;
    case 9:
      if ( a3 >= 0x2000 )
        goto LABEL_27;
      break;
    case 10:
      if ( a3 >= 0x4000 )
        goto LABEL_27;
      break;
    case 11:
      if ( a3 >= 0x8000 )
        goto LABEL_27;
      break;
    case 12:
      if ( a3 >= 0x10000 )
        goto LABEL_27;
      break;
    default:
LABEL_27:
      result = 0;
      break;
  }
  return result;
}
