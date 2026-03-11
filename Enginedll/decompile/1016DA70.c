/*
 * func-name: sub_1016DA70
 * func-address: 0x1016da70
 * callers: none
 * callees: 0x101189f0, 0x10121b80, 0x1016d7c0, 0x1016d9e0
 */

int __thiscall sub_1016DA70(void **this)
{
  void *v2; // eax
  void **v3; // ebx
  void *v4; // eax
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  __int64 v10; // [esp+2Eh] [ebp-8h]

  v2 = this[6];
  v3 = this + 6;
  if ( v2 )
  {
    (*(void (__stdcall **)(void *))(*(_DWORD *)v2 + 8))(v2);
    *v3 = 0;
  }
  v4 = this[7];
  if ( v4 )
  {
    (*(void (__stdcall **)(void *))(*(_DWORD *)v4 + 8))(v4);
    this[7] = 0;
  }
  v5 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, int, void **, _DWORD))(**((_DWORD **)v5 + 427)
                                                                                           + 116))(
    *((_DWORD *)v5 + 427),
    (__int64)*((float *)this[3] + 399),
    (__int64)*((float *)this[3] + 399),
    75,
    0,
    0,
    1,
    this + 7,
    0);
  v6 = RenderDevice::Instance();
  v10 = (__int64)*((float *)this[3] + 399);
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int, int, int, _DWORD, void **, _DWORD))(**((_DWORD **)v6 + 427) + 92))(
    *((_DWORD *)v6 + 427),
    v10,
    v10,
    1,
    1,
    21,
    0,
    v3,
    0);
  v7 = this[3];
  if ( v7 )
  {
    v8 = v7[397];
    if ( v8 )
      Shader::SetRenderTarget(*(Shader **)(v8 + 152), *v3);
  }
  sub_1016D7C0((int)this);
  sub_1016D9E0(this);
  return 0;
}
