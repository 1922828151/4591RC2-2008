/*
 * func-name: ??1Stream_Base@Utility@Outpop@@UAE@XZ
 * func-address: 0x1000ee90
 * callers: 0x1000e580, 0x1000e630, 0x1000e6b0, 0x1000e750, 0x1000eb80
 * callees: 0x10003250, 0x1000e110
 */

void __thiscall Outpop::Utility::Stream_Base::~Stream_Base(Outpop::Utility::Stream_Base *this)
{
  bool v2; // zf
  char *v3; // edi
  Outpop::Utility::Sect_Block_Allocator *v4; // eax
  Outpop::Utility::Sect_Block_Allocator *v5; // eax
  int v6; // edi
  int v7; // edi
  char *v8; // [esp-4h] [ebp-24h]

  *(_DWORD *)this = &Outpop::Utility::Stream_Base::`vftable';
  v2 = *((_BYTE *)this + 20) == 0;
  if ( *((_BYTE *)this + 20) )
  {
    v3 = (char *)*((_DWORD *)this + 2);
    if ( v3 )
    {
      v8 = *(char **)v3;
      v4 = Outpop::Utility::Sect_Block_Allocator::instance();
      Outpop::Utility::Sect_Block_Allocator::free(v4, v8);
      v5 = Outpop::Utility::Sect_Block_Allocator::instance();
      Outpop::Utility::Sect_Block_Allocator::free(v5, v3);
    }
    v2 = *((_BYTE *)this + 20) == 0;
  }
  if ( v2 )
  {
    v6 = *((_DWORD *)this + 6);
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    }
  }
  v7 = *((_DWORD *)this + 8);
  if ( v7 && !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
    (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  *(_DWORD *)this = &Outpop::Utility::Ref_Object::`vftable';
}
