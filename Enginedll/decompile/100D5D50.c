/*
 * func-name: ?OnResize@GUISystem@@UAEXXZ
 * func-address: 0x100d5d50
 * callers: none
 * callees: 0x101189f0, 0x1016c920
 */

void __thiscall GUISystem::OnResize(GUISystem *this)
{
  struct RenderDevice *v2; // eax
  int v3; // ebx
  struct RenderDevice *v4; // eax
  int v5; // ebp
  unsigned int i; // edi
  int v7; // ecx
  int v8; // ecx
  void (__cdecl *v9)(int, int); // esi
  int v10; // eax

  v2 = RenderDevice::Instance();
  v3 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v2 + 296))(v2);
  v4 = RenderDevice::Instance();
  v5 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v4 + 300))(v4);
  for ( i = 0; ; ++i )
  {
    v7 = *((_DWORD *)this + 5);
    if ( !v7 || i >= (*((_DWORD *)this + 6) - v7) >> 2 )
      break;
    v8 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 5) + 4 * i) + 4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 24))(v8);
  }
  v9 = (void (__cdecl *)(int, int))*((_DWORD *)this + 1);
  if ( v9 )
    v9(v3, v5);
  v10 = sub_1016C920();
  sub_1016C4C0(v10);
}
