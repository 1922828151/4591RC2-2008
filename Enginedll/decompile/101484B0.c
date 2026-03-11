/*
 * func-name: ?onHit@OutpopRaycastReport@@UAE_NABUNxRaycastHit@@@Z
 * func-address: 0x101484b0
 * callers: none
 * callees: 0x10019470, 0x100244d0, 0x10024540, 0x100913d0, 0x1009dd90, 0x10100ca0, 0x10148830, 0x10148db0
 */

char __thiscall OutpopRaycastReport::onHit(OutpopRaycastReport *this, const struct NxRaycastHit *a2)
{
  float *v3; // eax
  float *v4; // eax
  int *v5; // eax
  int v6; // ecx
  bool v7; // zf
  int v8; // eax
  ModelFrame *v9; // eax
  struct Mesh *Mesh; // eax
  float v12[3]; // [esp+8h] [ebp-80h] BYREF
  void *v13[2]; // [esp+14h] [ebp-74h] BYREF
  double v14; // [esp+1Ch] [ebp-6Ch]
  int v15[4]; // [esp+24h] [ebp-64h] BYREF
  int v16[4]; // [esp+34h] [ebp-54h] BYREF
  int v17[4]; // [esp+44h] [ebp-44h] BYREF
  int v18; // [esp+54h] [ebp-34h]
  int v19; // [esp+5Ch] [ebp-2Ch]
  int v20; // [esp+60h] [ebp-28h]
  int v21; // [esp+84h] [ebp-4h]

  CollisionInfo::CollisionInfo((CollisionInfo *)v13);
  v14 = *((float *)a2 + 9);
  v21 = 0;
  v19 = 0;
  v3 = NxHelper::ToVector(v12, (float *)a2 + 4);
  sub_100913D0(v15, v3);
  v4 = NxHelper::ToVector(v12, (float *)a2 + 1);
  sub_100913D0(v16, v4);
  sub_10148830((int)v17, (int)a2);
  v5 = *(int **)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)a2 + 4))(*(_DWORD *)a2) + 4);
  if ( v5 )
  {
    v6 = *v5;
    v7 = *v5 == 0;
    v18 = *v5;
    v20 = v5[1];
    if ( !v7 )
    {
      v8 = *(_DWORD *)(v6 + 716);
      if ( v8 )
      {
        v9 = *(ModelFrame **)(v8 + 308);
        if ( v9 )
        {
          if ( ModelFrame::GetMesh(v9, 0) )
          {
            Mesh = ModelFrame::GetMesh(*(ModelFrame **)(*(_DWORD *)(v18 + 716) + 308), 0);
            v19 = *(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)Mesh + 615, 0);
          }
        }
      }
    }
  }
  else
  {
    v18 = 0;
  }
  sub_10148DB0((int)this + 4, (struct CollisionInfo *)v13);
  CollisionInfo::~CollisionInfo(v13);
  return 1;
}
