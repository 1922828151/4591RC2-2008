/*
 * func-name: ?Shutdown@Editor@@QAEXXZ
 * func-address: 0x1007f2e0
 * callers: 0x10096550
 * callees: 0x100971c0, 0x1017dd90, 0x1017de30
 */

void __thiscall Editor::Shutdown(Editor *this)
{
  struct Engine *v2; // eax
  struct Engine *v3; // eax
  char v4; // [esp-14h] [ebp-34h] BYREF
  int v5; // [esp-10h] [ebp-30h]
  int v6; // [esp-Ch] [ebp-2Ch]
  int v7; // [esp-8h] [ebp-28h]
  int v8; // [esp-4h] [ebp-24h]
  int v9; // [esp+0h] [ebp-20h]
  int v10; // [esp+4h] [ebp-1Ch]
  int v11; // [esp+8h] [ebp-18h]
  char *v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+1Ch] [ebp-4h]

  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 16) + 8))(*((_DWORD *)this + 16));
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 17) + 8))(*((_DWORD *)this + 17));
  v11 = *((unsigned __int8 *)this + 2084);
  v12 = &v4;
  std::string::string(&v4, "SnapToGrid");
  v13 = 0;
  v2 = Engine::Instance();
  v13 = -1;
  sub_1017DD90(*((_DWORD *)v2 + 29), v4, v5, v6, v7, v8, v9, v10, v11);
  v11 = *((int *)this + 522);
  v12 = &v4;
  std::string::string(&v4, "SnapToGridValue");
  v13 = 1;
  v3 = Engine::Instance();
  v13 = -1;
  sub_1017DE30(*((_DWORD *)v3 + 29), v4, v5, v6, v7, v8, v9, v10, *(float *)&v11);
}
