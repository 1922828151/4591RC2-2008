/*
 * func-name: ?UpdateTransformFPV@CombinRobot@GameClient@@QAEXABVMatrix@@ABVVector@@@Z_0
 * func-address: 0x10110440
 * callers: 0x10004589
 * callees: 0x102c1be0, 0x102c23d0
 */

void __thiscall GameClient::CombinRobot::UpdateTransformFPV(
        GameClient::CombinRobot *this,
        const struct Matrix *a2,
        const struct Vector *a3)
{
  float v4; // edx
  float v5; // eax
  int v6; // ecx
  float v7; // [esp+4h] [ebp-98h] BYREF
  float v8; // [esp+8h] [ebp-94h]
  float v9; // [esp+Ch] [ebp-90h]
  float v10; // [esp+10h] [ebp-8Ch] BYREF
  float v11; // [esp+14h] [ebp-88h]
  float v12; // [esp+18h] [ebp-84h]
  _BYTE v13[64]; // [esp+1Ch] [ebp-80h] BYREF
  _BYTE v14[64]; // [esp+5Ch] [ebp-40h] BYREF

  if ( *((_BYTE *)this + 1392) )
  {
    if ( *((_DWORD *)this + 349) )
    {
      v4 = *((float *)a3 + 1);
      qmemcpy(v13, a2, sizeof(v13));
      v5 = *((float *)a3 + 2);
      v7 = *(float *)a3;
      v8 = v4;
      v9 = v5;
      sub_102C23D0(v14);
      v10 = 0.0;
      v11 = 0.0;
      v12 = 0.0;
      sub_102C1BE0((char *)this + 1428, &v10);
      v6 = *((_DWORD *)this + 349);
      v7 = v10 + v7;
      v8 = v8 + v11;
      v9 = v9 + v12;
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 20))(v6);
      (*(void (__thiscall **)(_DWORD, _BYTE *, float *))(**((_DWORD **)this + 349) + 28))(
        *((_DWORD *)this + 349),
        v13,
        &v7);
    }
  }
}
