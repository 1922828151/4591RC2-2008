/*
 * func-name: ?Reset@NxPhysics@@QAEXXZ
 * func-address: 0x10144910
 * callers: 0x10145800
 * callees: 0x10140c10, 0x10144030, 0x10147860
 */

void __thiscall NxPhysics::Reset(NxPhysics *this)
{
  int v2; // ecx
  _DWORD *v3; // eax
  void (__thiscall **v4)(_DWORD, struct NxPhysicsContactReport *); // ebx
  struct NxPhysicsContactReport *v5; // eax
  int v6; // ebx
  float v7[39]; // [esp+34h] [ebp-9Ch] BYREF

  if ( *((_DWORD *)this + 2) )
  {
    NxPhysics::FlushScene(this);
    NxPhysics::UpdateScene(this, 0);
    NxPhysics::FlushScene(this);
    if ( !*((_DWORD *)this + 3) )
    {
      v2 = *((_DWORD *)this + 2);
      v7[11] = 0.016666668;
      memset(&v7[3], 0, 32);
      v7[0] = 0.0;
      v7[1] = -9.8100004;
      v7[2] = 0.0;
      LODWORD(v7[12]) = 8;
      memset(&v7[13], 0, 24);
      LODWORD(v7[19]) = 68;
      LODWORD(v7[31]) = 5;
      LODWORD(v7[32]) = 4;
      memset(&v7[33], 0, 20);
      v7[20] = 0.0;
      v7[21] = 0.0;
      LODWORD(v7[22]) = 2;
      LODWORD(v7[26]) = 2;
      memset(&v7[23], 0, 12);
      memset(&v7[27], 0, 16);
      LODWORD(v7[38]) = 32;
      v3 = (_DWORD *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v2 + 16))(v2, v7);
      *((_DWORD *)this + 3) = v3;
      v4 = (void (__thiscall **)(_DWORD, struct NxPhysicsContactReport *))(*v3 + 412);
      v5 = NxPhysicsContactReport::Instance();
      (*v4)(*((_DWORD *)this + 3), v5);
      (*(void (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 3) + 404))(*((_DWORD *)this + 3), (char *)this + 44);
      (*(void (__stdcall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 328))(0.0099999998, 20, 0);
      v6 = (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 3) + 320))(*((_DWORD *)this + 3), 0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 36))(v6, 0.0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 28))(v6, 2.0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 20))(v6, 1.0);
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        0,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        1,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        2,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        3,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        4,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        5,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        6,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        7,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        8,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        9,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        10,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        11,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        12,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        13,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        14,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        0,
        15,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 1, 1, 0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 1, 2, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 1, 3, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 1, 4, 0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 1, 5, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 1, 6, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 1, 7, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 1, 8, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 1, 9, 0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 1, 10, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        1,
        11,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 1, 12, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 1, 13, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 1, 14, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 1, 15, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 2, 2, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 2, 3, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 2, 4, 0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 2, 5, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 2, 6, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 2, 7, 0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 2, 8, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 2, 9, 0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 2, 10, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        2,
        11,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 2, 12, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 2, 13, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 2, 14, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 2, 15, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 3, 3, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 3, 4, 0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 3, 5, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 3, 6, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 3, 7, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 3, 8, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 3, 9, 0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 3, 10, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        3,
        11,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 3, 12, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 3, 13, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 3, 14, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 3, 15, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 4, 4, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 4, 5, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 4, 6, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 4, 7, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 4, 8, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 4, 9, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        4,
        10,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        4,
        11,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        4,
        12,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        4,
        13,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        4,
        14,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        4,
        15,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 5, 5, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 5, 6, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 5, 7, 0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 5, 8, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 5, 9, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        5,
        10,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        5,
        11,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        5,
        12,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        5,
        13,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        5,
        14,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        5,
        15,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 6, 6, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 6, 7, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 6, 8, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 6, 9, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        6,
        10,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        6,
        11,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        6,
        12,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        6,
        13,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 6, 14, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 6, 15, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 7, 7, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 7, 8, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 7, 9, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        7,
        10,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 7, 11, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        7,
        12,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        7,
        13,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        7,
        14,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        7,
        15,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 8, 8, 0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 8, 9, 0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 8, 10, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        8,
        11,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 8, 12, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 8, 13, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 8, 14, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 8, 15, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 9, 9, 0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 9, 10, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        9,
        11,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        9,
        12,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        9,
        13,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        9,
        14,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        9,
        15,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        10,
        10,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        10,
        11,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 10, 12, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 10, 13, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 10, 14, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 10, 15, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        11,
        11,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        11,
        12,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        11,
        13,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        11,
        14,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        11,
        15,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        12,
        12,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 12, 13, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        12,
        14,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 12, 15, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 13, 13, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 13, 14, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 13, 15, 1);
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 3) + 188))(
        *((_DWORD *)this + 3),
        14,
        14,
        0);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 14, 15, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 188))(*((_DWORD *)this + 3), 15, 15, 1);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 2, 1, 6);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 2, 3, 6);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 2, 5, 6);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 2, 8, 6);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 2, 12, 8);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 2, 13, 8);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 2, 14, 8);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 2, 15, 8);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 14, 1, 8);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 14, 3, 8);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 14, 5, 6);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 14, 6, 8);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 14, 8, 8);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 14, 13, 8);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 14, 15, 8);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 10, 1, 6);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 10, 3, 6);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 10, 5, 6);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 12, 1, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 12, 3, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 12, 5, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 12, 8, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 12, 13, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 12, 15, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 13, 1, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 13, 3, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 13, 5, 6);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 13, 8, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 13, 13, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 13, 12, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 13, 14, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 13, 15, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 14, 1, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 14, 3, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 14, 5, 6);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 14, 6, 8);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 14, 8, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 14, 13, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 14, 15, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 15, 1, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 15, 3, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 15, 5, 6);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 15, 6, 8);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 15, 8, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 15, 13, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 15, 12, 14);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 15, 14, 8);
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 3) + 204))(*((_DWORD *)this + 3), 15, 15, 14);
    }
  }
}
