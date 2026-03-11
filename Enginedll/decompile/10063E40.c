/*
 * func-name: ?AddFrustumBox@Camera@@QAEXAAVBBox@@@Z
 * func-address: 0x10063e40
 * callers: none
 * callees: 0x10001440, 0x10064480, 0x1017a0b0
 */

void __thiscall Camera::AddFrustumBox(Camera *this, struct BBox *a2)
{
  float v3[24]; // [esp+4h] [ebp-98h] BYREF
  char v4; // [esp+64h] [ebp-38h]
  float v5[10]; // [esp+68h] [ebp-34h] BYREF
  int v6; // [esp+98h] [ebp-4h]

  v3[0] = 0.0;
  v3[1] = 0.0;
  v3[2] = 0.0;
  v3[4] = 0.0;
  v3[5] = 0.0;
  v3[6] = 0.0;
  v3[8] = 0.0;
  v3[9] = 0.0;
  v3[10] = 0.0;
  v3[12] = 0.0;
  v3[13] = 0.0;
  v3[14] = 0.0;
  v3[16] = 0.0;
  v3[17] = 0.0;
  v3[18] = 0.0;
  v3[20] = 0.0;
  v3[21] = 0.0;
  v3[22] = 0.0;
  sub_10001440(v5);
  v6 = 0;
  v4 = 1;
  sub_10064480((int)this + 140, v3);
  v6 = -1;
  sub_1017A0B0(v5);
}
