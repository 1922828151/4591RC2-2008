/*
 * func-name: ?setRayCheck@CameraHandler@@QAEXPAVWorld@@VVector@@AAV?$vector@JV?$allocator@J@std@@@std@@@Z_0
 * func-address: 0x100dd1c0
 * callers: 0x10003af3
 * callees: 0x100029cd, 0x102c9dbc
 */

void __thiscall CameraHandler::setRayCheck(float *this, int a2, float a3, float a4, float a5, int a6)
{
  float *v7; // esi
  int v8; // eax
  float *v9; // edi
  double v10; // st7
  float v11; // edx
  float v12; // eax
  float v13; // [esp+18h] [ebp-98h]
  float v14; // [esp+18h] [ebp-98h]
  float v15; // [esp+18h] [ebp-98h]
  float v16; // [esp+18h] [ebp-98h]
  float v17; // [esp+18h] [ebp-98h]
  float v18; // [esp+1Ch] [ebp-94h]
  float v19; // [esp+1Ch] [ebp-94h]
  float v20; // [esp+1Ch] [ebp-94h]
  float v21; // [esp+20h] [ebp-90h]
  float v22; // [esp+20h] [ebp-90h]
  float v23; // [esp+20h] [ebp-90h]
  _BYTE v24[36]; // [esp+3Ch] [ebp-74h] BYREF
  float *v25; // [esp+60h] [ebp-50h]
  int v26; // [esp+64h] [ebp-4Ch]
  int v27; // [esp+ACh] [ebp-4h]

  CollisionInfo::CollisionInfo((CollisionInfo *)v24);
  v7 = this + 184;
  v27 = 0;
  v8 = NxPhysics::Instance(a6, &a3, v7, 3, v24);
  if ( (unsigned __int8)NxPhysics::RayCast(v8) )
  {
    v9 = v25;
    if ( !v25 || !((v26 - (int)v25) / 12) )
    {
      _invalid_parameter_noinfo();
      v9 = v25;
    }
    v10 = a3;
    *v7 = *v9;
    v7[1] = v9[1];
    v7[2] = v9[2];
    v18 = v10 - *v7;
    v21 = a4 - v7[1];
    v13 = a5 - v7[2];
    v14 = v21 * v21 + v18 * v18 + v13 * v13;
    v15 = sqrt(v14);
    if ( v15 <= 1.0 )
    {
      v11 = a4;
      v12 = a5;
      *v7 = a3;
      v7[1] = v11;
      v7[2] = v12;
    }
    else
    {
      v16 = a3 - *v7;
      v19 = a4 - v7[1];
      v22 = a5 - v7[2];
      sub_100029CD();
      v17 = v16 * 2.0;
      v20 = v19 * 2.0;
      v23 = 2.0 * v22;
      *v7 = *v7 + v17;
      v7[1] = v20 + v7[1];
      v7[2] = v7[2] + v23;
    }
  }
  v27 = -1;
  CollisionInfo::~CollisionInfo((CollisionInfo *)v24);
}
