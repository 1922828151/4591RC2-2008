/*
 * func-name: ?InitInput@Editor@@QAEXXZ
 * func-address: 0x1007f170
 * callers: none
 * callees: 0x100dad30, 0x100db530
 */

void __thiscall Editor::InitInput(Editor *this)
{
  int ControlHandle; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char v12; // [esp-1Ch] [ebp-24h] BYREF
  int v13; // [esp-18h] [ebp-20h]
  int v14; // [esp-14h] [ebp-1Ch]
  int v15; // [esp-10h] [ebp-18h]
  int v16; // [esp-Ch] [ebp-14h]
  int v17; // [esp-8h] [ebp-10h]
  int v18; // [esp-4h] [ebp-Ch]
  char *v19; // [esp+4h] [ebp-4h]

  v19 = &v12;
  *((_DWORD *)this + 1) = Input::Instance();
  std::string::string(&v12, "WALK_FORWARDS");
  ControlHandle = Input::GetControlHandle(v12, v13, v14, v15, v16, v17, v18);
  v19 = &v12;
  *((_DWORD *)this + 2) = ControlHandle;
  std::string::string(&v12, "WALK_BACKWARDS");
  v3 = Input::GetControlHandle(v12, v13, v14, v15, v16, v17, v18);
  v19 = &v12;
  *((_DWORD *)this + 3) = v3;
  std::string::string(&v12, "STRAFE_LEFT");
  v4 = Input::GetControlHandle(v12, v13, v14, v15, v16, v17, v18);
  v19 = &v12;
  *((_DWORD *)this + 4) = v4;
  std::string::string(&v12, "STRAFE_RIGHT");
  v5 = Input::GetControlHandle(v12, v13, v14, v15, v16, v17, v18);
  v19 = &v12;
  *((_DWORD *)this + 5) = v5;
  std::string::string(&v12, "FREE_LOOK");
  v6 = Input::GetControlHandle(v12, v13, v14, v15, v16, v17, v18);
  v19 = &v12;
  *((_DWORD *)this + 8) = v6;
  std::string::string(&v12, "GUIClick");
  v7 = Input::GetControlHandle(v12, v13, v14, v15, v16, v17, v18);
  v19 = &v12;
  *((_DWORD *)this + 9) = v7;
  std::string::string(&v12, "MultiSelect");
  v8 = Input::GetControlHandle(v12, v13, v14, v15, v16, v17, v18);
  v19 = &v12;
  *((_DWORD *)this + 10) = v8;
  std::string::string(&v12, "CloneDrag");
  v9 = Input::GetControlHandle(v12, v13, v14, v15, v16, v17, v18);
  v19 = &v12;
  *((_DWORD *)this + 11) = v9;
  std::string::string(&v12, "EnableContextMenu");
  v10 = Input::GetControlHandle(v12, v13, v14, v15, v16, v17, v18);
  v19 = &v12;
  *((_DWORD *)this + 14) = v10;
  std::string::string(&v12, "ZoomIn");
  v11 = Input::GetControlHandle(v12, v13, v14, v15, v16, v17, v18);
  v19 = &v12;
  *((_DWORD *)this + 13) = v11;
  std::string::string(&v12, "ZoomOut");
  *((_DWORD *)this + 12) = Input::GetControlHandle(v12, v13, v14, v15, v16, v17, v18);
}
