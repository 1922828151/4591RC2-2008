/*
 * func-name: sub_10127CB0
 * func-address: 0x10127cb0
 * callers: 0x10127d70, 0x101282d0
 * callees: 0x101189f0
 */

int __thiscall sub_10127CB0(_DWORD *this)
{
  struct RenderDevice *v2; // eax
  struct RenderDevice *v3; // eax
  int result; // eax

  if ( this[2] )
  {
    v2 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)v2 + 427) + 156))(*((_DWORD *)v2 + 427), this[2]);
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this[2] + 8))(this[2]);
  }
  v3 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)v3 + 427) + 148))(*((_DWORD *)v3 + 427), 0, this[3]);
  result = this[3];
  if ( result )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(this[3]);
    this[3] = 0;
  }
  return result;
}
