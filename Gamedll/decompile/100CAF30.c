/*
 * func-name: ?GetWorldBBox@TraceLineSystem@@UAE?AVBBox@@XZ_0
 * func-address: 0x100caf30
 * callers: 0x10018219
 * callees: 0x100146be, 0x102c9dbc
 */

int __thiscall TraceLineSystem::GetWorldBBox(float *this, int a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  float v6; // [esp+4h] [ebp-20h]
  float v7; // [esp+8h] [ebp-1Ch]
  float v8; // [esp+8h] [ebp-1Ch]
  float v9; // [esp+8h] [ebp-1Ch]
  double v10; // [esp+Ch] [ebp-18h] BYREF
  float v11; // [esp+14h] [ebp-10h]
  float v12[3]; // [esp+18h] [ebp-Ch] BYREF

  v6 = (this[66] + this[65]) / 1000.0;
  v2 = this[61];
  v3 = this[60];
  v4 = this[62];
  v10 = v6;
  v7 = v2 * v2 + v3 * v3 + v4 * v4;
  v8 = sqrt(v7);
  v9 = v8 * 0.5 * (v6 * v6) + (this[67] + this[63]) * v6;
  *(float *)&v10 = this[5] + v9;
  *((float *)&v10 + 1) = this[6] + v9;
  v11 = v9 + this[7];
  v12[0] = this[5] - v9;
  v12[1] = this[6] - v9;
  v12[2] = this[7] - v9;
  sub_100146BE((int)v12, (int)&v10);
  return a2;
}
