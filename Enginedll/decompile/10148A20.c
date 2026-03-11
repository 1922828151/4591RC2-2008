/*
 * func-name: sub_10148A20
 * func-address: 0x10148a20
 * callers: 0x10148d00
 * callees: 0x10024540, 0x100245a0, 0x10051d20, 0x10051d70, 0x10052ca0, 0x10052ef0, 0x100531e0, 0x100533c0, 0x100995f0, 0x101488a0, 0x101489b0, 0x101489f0, 0x101a2500, 0x101a2522
 */

void __thiscall sub_10148A20(int this, int a2, struct CollisionInfo *a3, unsigned int a4, struct CollisionInfo *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  CollisionInfo *v12; // eax
  struct CollisionInfo *v13; // ecx
  CREControl *v14; // eax
  CollisionInfo *v15; // eax
  struct CollisionInfo *v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // ebx
  struct CollisionInfo *v20; // ecx
  int v21; // ebx
  CollisionInfo *v22; // [esp-Ch] [ebp-98h]
  int v23; // [esp-8h] [ebp-94h]
  double *v24; // [esp-8h] [ebp-94h]
  int v25; // [esp+0h] [ebp-8Ch] BYREF
  void *v26[26]; // [esp+Ch] [ebp-80h] BYREF
  int v27; // [esp+74h] [ebp-18h]
  int v28; // [esp+78h] [ebp-14h]
  int *v29; // [esp+7Ch] [ebp-10h]
  int v30; // [esp+88h] [ebp-4h]
  int v31; // [esp+9Ch] [ebp+10h]
  struct CollisionInfo *v32; // [esp+A0h] [ebp+14h]
  struct CollisionInfo *v33; // [esp+A0h] [ebp+14h]

  v29 = &v25;
  v28 = this;
  CollisionInfo::CollisionInfo((CollisionInfo *)v26, a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v30 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 104;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 104;
    else
      v8 = 0;
    if ( 41297762 - v8 < a4 )
      sub_10051D70();
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 104;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v20 = *(struct CollisionInfo **)(this + 8);
      v33 = v20;
      if ( (v20 - a3) / 104 >= a4 )
      {
        v21 = 104 * a4;
        v31 = (int)v20 - 104 * a4;
        *(_DWORD *)(this + 8) = sub_100531E0((struct CollisionInfo *)((char *)v20 - v21), v20, v20);
        sub_101489F0((int)a3, v31, (int)v33);
        sub_101488A0((double *)a3, (double *)((char *)a3 + v21), (int)v26);
      }
      else
      {
        sub_100531E0(a3, v20, (struct CollisionInfo *)((char *)a3 + 104 * a4));
        v23 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 104;
        v22 = *(CollisionInfo **)(this + 8);
        LOBYTE(v30) = 3;
        sub_101489B0(v22, v23, (struct CollisionInfo *)v26);
        *(_DWORD *)(this + 8) += 104 * a4;
        v24 = (double *)(*(_DWORD *)(this + 8) - 104 * a4);
        v30 = 0;
        sub_101488A0((double *)a3, v24, (int)v26);
      }
    }
    else
    {
      if ( 41297762 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) / 104;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_10051D20((_DWORD *)this);
      v12 = (CollisionInfo *)sub_100995F0(v10);
      v13 = *(struct CollisionInfo **)(this + 4);
      LOBYTE(v27) = 0;
      v32 = v12;
      LOBYTE(v30) = 1;
      v14 = sub_10052CA0(v13, a3, v12);
      v15 = (CollisionInfo *)sub_101489B0(v14, a4, (struct CollisionInfo *)v26);
      v16 = *(struct CollisionInfo **)(this + 8);
      LOBYTE(v27) = 0;
      sub_10052CA0(a3, v16, v15);
      v17 = *(_DWORD *)(this + 4);
      if ( v17 )
        v18 = (*(_DWORD *)(this + 8) - v17) / 104;
      else
        v18 = 0;
      v19 = v18 + a4;
      if ( v17 )
      {
        sub_10052EF0(v17, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = (char *)v32 + 104 * v10;
      *(_DWORD *)(this + 8) = (char *)v32 + 104 * v19;
      *(_DWORD *)(this + 4) = v32;
    }
  }
  CollisionInfo::~CollisionInfo(v26);
}
