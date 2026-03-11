/*
 * func-name: sub_10003150
 * func-address: 0x10003150
 * callers: none
 * callees: 0x10007a90, 0x10007a96, 0x10019760
 */

void __thiscall sub_10003150(Input *this, struct ConfigFile *a2, HWND a3, BOOL a4)
{
  _DWORD *v5; // edi
  HMODULE ModuleHandleA; // eax
  HRESULT v7; // eax
  const char *v8; // eax
  _DWORD *v9; // ebx
  int v10; // eax
  const char *v11; // eax
  int v12; // eax
  const char *v13; // eax
  int v14; // eax
  const char *v15; // eax
  int v16; // eax
  const char *v17; // eax
  int v18; // eax
  const char *v19; // eax
  LPVOID *v20; // [esp+3Ch] [ebp-18h]

  v5 = (_DWORD *)((char *)this + 6080);
  v20 = (LPVOID *)((char *)this + 6080);
  *((_DWORD *)this + 1829) = a3;
  ModuleHandleA = GetModuleHandleA(0);
  v7 = DirectInput8Create(ModuleHandleA, 0x800u, &riidltf, v20, 0);
  if ( v7 < 0 )
  {
    v8 = sub_10007A96(v7);
    Error("Input Creation failed: %s", v8);
  }
  v9 = (_DWORD *)((char *)this + 6084);
  v10 = (*(int (__stdcall **)(_DWORD, void *, char *, _DWORD))(*(_DWORD *)*v5 + 12))(
          *v5,
          &unk_10034254,
          (char *)this + 6084,
          0);
  if ( v10 < 0 )
  {
    v11 = sub_10007A96(v10);
    Error("Keyboard Input Creation failed: %s", v11);
  }
  v12 = (*(int (__stdcall **)(_DWORD, void *))(*(_DWORD *)*v9 + 44))(*v9, &unk_1001C4F4);
  if ( v12 < 0 )
  {
    v13 = sub_10007A96(v12);
    Error("Keyboard Input SetDataFormat() failed: %s", v13);
  }
  v14 = (*(int (__stdcall **)(_DWORD, HWND, int))(*(_DWORD *)*v9 + 52))(*v9, a3, 6);
  if ( v14 < 0 )
  {
    v15 = sub_10007A96(v14);
    Error("Keyboard Input SetCooperativeLevel() failed: %s", v15);
  }
  v16 = (*(int (__stdcall **)(_DWORD, void *, char *, _DWORD))(*(_DWORD *)*v5 + 12))(
          *v5,
          &unk_10034264,
          (char *)this + 6088,
          0);
  if ( v16 < 0 )
  {
    v17 = sub_10007A96(v16);
    Error("Mouse Input Creation failed: %s", v17);
  }
  v18 = (*(int (__stdcall **)(_DWORD, void *))(**((_DWORD **)this + 1522) + 44))(
          *((_DWORD *)this + 1522),
          &unk_1001C2EC);
  if ( v18 < 0 )
  {
    v19 = sub_10007A96(v18);
    Error("Mouse Input SetDataFormat() failed: %s", v19);
  }
  (*(void (__thiscall **)(Input *, BOOL))(*(_DWORD *)this + 72))(this, a4);
  (*(void (__stdcall **)(_DWORD, int, int (__stdcall *)(int, int), char *, int))(*(_DWORD *)*v5 + 16))(
    *v5,
    4,
    sub_10002DC0,
    (char *)this + 6092,
    1);
  memset((char *)this + 6660, 0, 0x140u);
  memset((char *)this + 6116, 0, 0x100u);
  *((_DWORD *)this + 1657) = 0;
  *((_DWORD *)this + 1658) = 0;
  *((_DWORD *)this + 1659) = 0;
  *((_DWORD *)this + 1660) = 0;
  (*(void (__thiscall **)(Input *, bool))(*(_DWORD *)this + 76))(this, *((_DWORD *)this + 1527) != 0);
  Input::Initialize(this, a2, a3, a4);
}
