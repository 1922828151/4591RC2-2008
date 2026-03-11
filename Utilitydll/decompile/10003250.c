/*
 * func-name: ?free@Sect_Block_Allocator@Utility@Outpop@@QAEXPAX@Z
 * func-address: 0x10003250
 * callers: 0x100038e0, 0x10004430, 0x1000e3e0, 0x1000e580, 0x1000eae0, 0x1000eb80, 0x1000ee90, 0x1000ef70
 * callees: 0x10005af0
 */

void __thiscall Outpop::Utility::Sect_Block_Allocator::free(Outpop::Utility::Sect_Block_Allocator *this, char *a2)
{
  if ( a2 )
  {
    switch ( *(a2 - 1) )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
        sub_10005AF0();
        break;
      case 13:
        free(a2 - 1);
        break;
      default:
        return;
    }
  }
}
