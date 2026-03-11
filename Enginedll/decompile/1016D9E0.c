/*
 * func-name: sub_1016D9E0
 * func-address: 0x1016d9e0
 * callers: 0x1016da70
 * callees: 0x101189f0
 */

int __thiscall sub_1016D9E0(_DWORD *this)
{
  struct RenderDevice *v2; // eax
  struct RenderDevice *v3; // eax
  int result; // eax

  if ( this[4] )
  {
    v2 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)v2 + 427) + 156))(*((_DWORD *)v2 + 427), this[4]);
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this[4] + 8))(this[4]);
  }
  v3 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)v3 + 427) + 148))(*((_DWORD *)v3 + 427), 0, this[5]);
  result = this[5];
  if ( result )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(this[5]);
    this[5] = 0;
  }
  return result;
}
