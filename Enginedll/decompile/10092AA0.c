/*
 * func-name: sub_10092AA0
 * func-address: 0x10092aa0
 * callers: 0x10092c60
 * callees: 0x10092510, 0x100927e0, 0x101780f2
 */

void __thiscall sub_10092AA0(int this, int a2, int a3)
{
  float *v4; // eax
  float *v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  float v9; // [esp+0h] [ebp-2Ch]
  float v10; // [esp+4h] [ebp-28h]
  int v11[4]; // [esp+Ch] [ebp-20h] BYREF
  float v12[4]; // [esp+1Ch] [ebp-10h] BYREF

  if ( *(_BYTE *)(this + 328) )
  {
    v10 = (float)a3;
    v9 = (float)a2;
    v4 = sub_10092510(this, (float *)v11, v9, v10);
    *(float *)(this + 352) = *v4;
    *(float *)(this + 356) = v4[1];
    *(float *)(this + 360) = v4[2];
    v5 = sub_100927E0((float *)this, v12, (float *)(this + 340), (float *)(this + 352));
    D3DXQuaternionMultiply(v11, this + 296, v5);
    v6 = v11[1];
    v7 = v11[2];
    *(_DWORD *)(this + 312) = v11[0];
    v8 = v11[3];
    *(_DWORD *)(this + 316) = v6;
    *(_DWORD *)(this + 320) = v7;
    *(_DWORD *)(this + 324) = v8;
  }
}
