/*
 * func-name: ?Unproject@Editor@@QAE?AVVector@@V2@@Z
 * func-address: 0x1007f3a0
 * callers: 0x10088cd0, 0x1008c3e0, 0x10169d00
 * callees: 0x101189f0, 0x101780bc
 */

float *__thiscall Editor::Unproject(int this, float *a2, char a3, int a4, int a5)
{
  struct RenderDevice *v5; // eax
  float v7[16]; // [esp+8h] [ebp-D8h] BYREF
  _BYTE v8[24]; // [esp+48h] [ebp-98h] BYREF
  _BYTE v9[64]; // [esp+60h] [ebp-80h] BYREF
  _BYTE v10[64]; // [esp+A0h] [ebp-40h] BYREF

  v7[14] = 0.0;
  v7[13] = 0.0;
  v7[12] = 0.0;
  v7[11] = 0.0;
  v7[9] = 0.0;
  v7[8] = 0.0;
  qmemcpy(v9, (const void *)(this + 472), sizeof(v9));
  v7[7] = 0.0;
  v7[6] = 0.0;
  v7[4] = 0.0;
  v7[3] = 0.0;
  v7[2] = 0.0;
  v7[1] = 0.0;
  v7[15] = 1.0;
  v7[10] = 1.0;
  v7[5] = 1.0;
  v7[0] = 1.0;
  qmemcpy(v10, (const void *)(this + 408), sizeof(v10));
  v5 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _BYTE *))(**((_DWORD **)v5 + 427) + 192))(*((_DWORD *)v5 + 427), v8);
  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  D3DXVec3Unproject(a2, &a3, v8, v10, v9, v7);
  return a2;
}
