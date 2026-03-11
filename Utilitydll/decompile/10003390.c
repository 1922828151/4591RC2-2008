/*
 * func-name: ?free@Sect_Block_Allocator@Utility@Outpop@@QAEXPAXI@Z
 * func-address: 0x10003390
 * callers: none
 * callees: 0x10005af0
 */

void __thiscall Outpop::Utility::Sect_Block_Allocator::free(
        Outpop::Utility::Sect_Block_Allocator *this,
        _DWORD *Block,
        unsigned int a3)
{
  if ( a3 > 0x10 )
  {
    if ( a3 > 0x20 )
    {
      if ( a3 > 0x40 )
      {
        if ( a3 > 0x80 )
        {
          if ( a3 > 0x10000 )
            free(Block);
          else
            sub_10005AF0();
        }
        else
        {
          EnterCriticalSection((LPCRITICAL_SECTION)this + 6);
          *Block = *((_DWORD *)this + 35);
          *((_DWORD *)this + 35) = Block;
          LeaveCriticalSection((LPCRITICAL_SECTION)this + 6);
        }
      }
      else
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 100));
        *Block = *((_DWORD *)this + 24);
        *((_DWORD *)this + 24) = Block;
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 100));
      }
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
      *Block = *((_DWORD *)this + 13);
      *((_DWORD *)this + 13) = Block;
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    }
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 12));
    *Block = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = Block;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 12));
  }
}
