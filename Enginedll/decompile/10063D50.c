/*
 * func-name: ?AddFrustum@Camera@@QAEXAAVMatrix@@0@Z
 * func-address: 0x10063d50
 * callers: none
 * callees: 0x10001440, 0x1001cb70, 0x100635c0, 0x10064480, 0x1017a0b0
 */

void __thiscall Camera::AddFrustum(Camera *this, struct Matrix *a2, struct Matrix *a3)
{
  float *v4; // eax
  void *v5; // edx
  float v6[24]; // [esp+4h] [ebp-D8h] BYREF
  char v7; // [esp+64h] [ebp-78h]
  float v8[10]; // [esp+68h] [ebp-74h] BYREF
  float v9[16]; // [esp+90h] [ebp-4Ch] BYREF
  int v10; // [esp+D8h] [ebp-4h]

  v6[0] = 0.0;
  v6[1] = 0.0;
  v6[2] = 0.0;
  v6[4] = 0.0;
  v6[5] = 0.0;
  v6[6] = 0.0;
  v6[8] = 0.0;
  v6[9] = 0.0;
  v6[10] = 0.0;
  v6[12] = 0.0;
  v6[13] = 0.0;
  v6[14] = 0.0;
  v6[16] = 0.0;
  v6[17] = 0.0;
  v6[18] = 0.0;
  v6[20] = 0.0;
  v6[21] = 0.0;
  v6[22] = 0.0;
  sub_10001440(v8);
  v7 = 0;
  v10 = 0;
  v4 = sub_1001CB70(a2, v9, (int)a3);
  Camera::CreateClipPlanes(this, (struct Camera::Frustum *)v6, (struct Matrix *)v4);
  sub_10064480((int)this + 140, v5);
  v10 = -1;
  sub_1017A0B0(v8);
}
