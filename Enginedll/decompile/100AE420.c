/*
 * func-name: ?Tick@CMultiLineEB@@UAEXXZ
 * func-address: 0x100ae420
 * callers: none
 * callees: none
 */

void __thiscall CMultiLineEB::Tick(CMultiLineEB *this)
{
  int v1; // esi
  int v2; // eax
  unsigned int v3; // edx
  int v4; // esi

  v1 = *(_DWORD *)(*((_DWORD *)this + 198) + 600);
  if ( v1 != *((_DWORD *)this + 207) )
  {
    v2 = *((_DWORD *)this + 144) - *((_DWORD *)this + 142);
    *((_DWORD *)this + 207) = v1;
    v3 = v2 / *((_DWORD *)this + 203) + v1 - 1;
    *((_DWORD *)this + 208) = v3;
    v4 = *((_DWORD *)this + 224);
    if ( !v4 || v3 >= (*((_DWORD *)this + 225) - v4) >> 2 )
    {
      if ( v4 )
        *((_DWORD *)this + 208) = ((*((_DWORD *)this + 225) - v4) >> 2) - 1;
      else
        *((_DWORD *)this + 208) = -1;
    }
  }
}
