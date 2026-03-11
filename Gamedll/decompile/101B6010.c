/*
 * func-name: ?OnUpdateMoveStatus@AircraftVehicle@GameClient@@QAEXKKKABVVector@@ABVMatrix@@000@Z_0
 * func-address: 0x101b6010
 * callers: 0x10012e1d
 * callees: 0x1001419b, 0x10019b41
 */

void __thiscall GameClient::AircraftVehicle::OnUpdateMoveStatus(
        GameClient::AircraftVehicle *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        const struct Vector *a5,
        const struct Matrix *a6,
        const struct Vector *a7,
        const struct Vector *a8,
        const struct Vector *a9)
{
  _DWORD *v10; // ebp
  void (__thiscall **v11)(_DWORD *, int); // edi
  int v12; // eax
  _DWORD *v13; // ebp
  void (__thiscall **v14)(_DWORD *, int); // edi
  int v15; // eax
  _DWORD *v16; // ebp
  void (__thiscall **v17)(_DWORD *, int); // edi
  int v18; // eax
  _DWORD *v19; // ebp
  void (__thiscall **v20)(_DWORD *, int); // edi
  int v21; // eax
  _DWORD v22[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( *((_DWORD *)this + 134) )
  {
    sub_10019B41((int)a5);
    sub_1001419B((int)a6);
    v10 = *(_DWORD **)(*((_DWORD *)this + 134) + 4);
    v11 = (void (__thiscall **)(_DWORD *, int))(*v10 + 224);
    v12 = NxHelper::ToNxVec3(v22, (char *)a6 + 48);
    (*v11)(v10, v12);
    v13 = *(_DWORD **)(*((_DWORD *)this + 134) + 4);
    v14 = (void (__thiscall **)(_DWORD *, int))(*v13 + 228);
    v15 = NxHelper::ToNxVec3(v22, a9);
    (*v14)(v13, v15);
    v16 = *(_DWORD **)(*((_DWORD *)this + 134) + 4);
    v17 = (void (__thiscall **)(_DWORD *, int))(*v16 + 256);
    v18 = NxHelper::ToNxVec3(v22, a7);
    (*v17)(v16, v18);
    v19 = *(_DWORD **)(*((_DWORD *)this + 134) + 4);
    v20 = (void (__thiscall **)(_DWORD *, int))(*v19 + 260);
    v21 = NxHelper::ToNxVec3(v22, a8);
    (*v20)(v19, v21);
    *((_DWORD *)this + 136) = a3;
    *((_DWORD *)this + 137) = a2;
    *((_DWORD *)this + 138) = a4;
  }
}
