/*
 * func-name: ?CheckOverlapAABB@NxPhysics@@QAE_NABVBBox@@W4NxShapesType@@I@Z
 * func-address: 0x10141b20
 * callers: none
 * callees: 0x10100b70
 */

char __thiscall NxPhysics::CheckOverlapAABB(_DWORD *this, int a2, int a3, int a4)
{
  float *v6; // eax
  float *v7; // eax
  int v8; // ecx
  float v9[3]; // [esp+4h] [ebp-24h] BYREF
  float v10; // [esp+10h] [ebp-18h] BYREF
  float v11; // [esp+14h] [ebp-14h]
  float v12; // [esp+18h] [ebp-10h]
  float v13; // [esp+1Ch] [ebp-Ch]
  float v14; // [esp+20h] [ebp-8h]
  float v15; // [esp+24h] [ebp-4h]

  if ( !this[3] )
    return 0;
  v10 = 3.4028235e38;
  v11 = 3.4028235e38;
  v12 = 3.4028235e38;
  v13 = -3.4028235e38;
  v14 = -3.4028235e38;
  v15 = -3.4028235e38;
  v6 = NxHelper::ToNxVec3(v9, (float *)(a2 + 28));
  v13 = *v6;
  v14 = v6[1];
  v15 = v6[2];
  v7 = NxHelper::ToNxVec3(v9, (float *)(a2 + 16));
  v8 = this[3];
  v10 = *v7;
  v11 = v7[1];
  v12 = v7[2];
  return (*(int (__thiscall **)(int, float *, int, int, _DWORD))(*(_DWORD *)v8 + 492))(v8, &v10, a3, a4, 0);
}
