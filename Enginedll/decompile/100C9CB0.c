/*
 * func-name: ??0C3DModel@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100c9cb0
 * callers: 0x1006b620
 * callees: 0x10063b20, 0x100c6ff0, 0x100dad30, 0x100db530
 */

C3DModel *__thiscall C3DModel::C3DModel(C3DModel *this, struct CREDialog *a2)
{
  char v4; // [esp-1Ch] [ebp-34h] BYREF
  int v5; // [esp-18h] [ebp-30h]
  LPRECT v6; // [esp-14h] [ebp-2Ch]
  int v7; // [esp-10h] [ebp-28h]
  int v8; // [esp-Ch] [ebp-24h]
  int v9; // [esp-8h] [ebp-20h]
  int v10; // [esp-4h] [ebp-1Ch]
  C3DModel *v11; // [esp+8h] [ebp-10h]
  int v12; // [esp+14h] [ebp-4h]

  v11 = this;
  CREControl::CREControl(this, a2);
  v12 = 0;
  *(_DWORD *)this = &C3DModel::`vftable';
  *((_DWORD *)this + 133) = 0;
  Camera::Camera((C3DModel *)((char *)this + 536));
  std::string::string((char *)this + 956);
  std::string::string((char *)this + 984);
  v10 = 0;
  *((float *)this + 269) = 0.0;
  v9 = 0;
  v8 = 0;
  v7 = 0;
  v6 = (LPRECT)((char *)this + 1028);
  LOBYTE(v12) = 3;
  *((_DWORD *)this + 261) = 0;
  *((_BYTE *)this + 1048) = 0;
  *((_BYTE *)this + 1056) = 0;
  *((_BYTE *)this + 1057) = 0;
  *((_BYTE *)this + 1058) = 0;
  *((_DWORD *)this + 270) = 0;
  *((_DWORD *)this + 271) = 0;
  SetRect(v6, v7, v8, v9, v10);
  std::string::string(&v4, "fire");
  LOBYTE(v12) = 4;
  Input::Instance();
  LOBYTE(v12) = 3;
  *((_DWORD *)this + 267) = Input::GetControlHandle(v4, v5, v6, v7, v8, v9, v10);
  return this;
}
