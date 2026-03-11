/*
 * func-name: sub_100C3270
 * func-address: 0x100c3270
 * callers: 0x1000920f
 * callees: 0x10005646, 0x10005ad3, 0x1000bbb3, 0x1000cb53, 0x100199a2, 0x1001a046, 0x102c0ed0
 */

void __fastcall sub_100C3270(SurfaceDecal **this)
{
  Effect_Base *v1; // esi
  SurfaceDecal *v2; // ebp
  _DWORD *v3; // ebx
  _DWORD *v4; // edi
  Editor *v5; // eax
  int v6; // ecx
  int v7; // edx
  float *v8; // eax
  double v9; // st7
  float *v10; // eax
  double v11; // st7
  int v12; // eax
  float *v13; // eax
  float *v14; // eax
  struct Vector *v15; // eax
  bool v16; // zf
  float v17; // eax
  float v18; // ecx
  int v19; // [esp+1Ch] [ebp-CCh]
  int v20; // [esp+20h] [ebp-C8h]
  float v21; // [esp+30h] [ebp-B8h]
  float v22; // [esp+30h] [ebp-B8h]
  float v23; // [esp+30h] [ebp-B8h]
  float v24; // [esp+34h] [ebp-B4h]
  float v25; // [esp+34h] [ebp-B4h]
  float v26; // [esp+34h] [ebp-B4h]
  float v27; // [esp+34h] [ebp-B4h]
  float v28; // [esp+34h] [ebp-B4h]
  float v29; // [esp+34h] [ebp-B4h]
  float v30; // [esp+34h] [ebp-B4h]
  float v31; // [esp+34h] [ebp-B4h]
  float v32; // [esp+34h] [ebp-B4h]
  float v33; // [esp+38h] [ebp-B0h]
  float v34; // [esp+38h] [ebp-B0h]
  float v35; // [esp+38h] [ebp-B0h]
  float v36; // [esp+38h] [ebp-B0h]
  float v37; // [esp+38h] [ebp-B0h]
  float v38; // [esp+38h] [ebp-B0h]
  float v39; // [esp+38h] [ebp-B0h]
  float v40; // [esp+3Ch] [ebp-ACh]
  float v41; // [esp+3Ch] [ebp-ACh]
  float v42; // [esp+3Ch] [ebp-ACh]
  float v43; // [esp+3Ch] [ebp-ACh]
  float v44; // [esp+3Ch] [ebp-ACh]
  float v45; // [esp+3Ch] [ebp-ACh]
  float v46; // [esp+3Ch] [ebp-ACh]
  float v47; // [esp+40h] [ebp-A8h] BYREF
  float v48; // [esp+44h] [ebp-A4h]
  float v49; // [esp+48h] [ebp-A0h]
  float v50; // [esp+50h] [ebp-98h] BYREF
  float v51; // [esp+54h] [ebp-94h]
  float v52; // [esp+58h] [ebp-90h]
  float v53; // [esp+5Ch] [ebp-8Ch] BYREF
  float v54; // [esp+60h] [ebp-88h]
  float v55; // [esp+64h] [ebp-84h]
  float v56[2]; // [esp+6Ch] [ebp-7Ch] BYREF
  float v57; // [esp+74h] [ebp-74h] BYREF
  char v58[16]; // [esp+78h] [ebp-70h] BYREF
  int v59; // [esp+B8h] [ebp-30h]
  int v60; // [esp+E4h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+E8h] [ebp+0h]

  v1 = (Effect_Base *)this;
  v2 = this[263];
  if ( v2 )
  {
    if ( *((_BYTE *)this + 1064) )
    {
      v3 = this + 292;
      v4 = this + 214;
      if ( (unsigned __int8)sub_1000BBB3((int)(this + 292))
        || (v5 = (Editor *)Editor::Instance(v19, v20), Editor::GetEditorMode(v5)) )
      {
        v6 = *((_DWORD *)v1 + 215);
        v7 = *((_DWORD *)v1 + 216);
        *v3 = *v4;
        *((_DWORD *)v1 + 293) = v6;
        *((_DWORD *)v1 + 294) = v7;
        CollisionInfo::CollisionInfo((CollisionInfo *)&v57);
        v33 = *((float *)v1 + 291);
        retaddr = 0;
        v8 = (float *)sub_102C0ED0(&v53);
        v9 = v33;
        v34 = *v8 * v33;
        v40 = v8[1] * v9;
        v24 = v9 * v8[2];
        v35 = v34 + *(float *)v4;
        v41 = *((float *)v1 + 215) + v40;
        v25 = *((float *)v1 + 216) + v24;
        v56[0] = v35;
        v56[1] = v41;
        v57 = v25;
        v26 = *((float *)v1 + 291);
        v10 = (float *)sub_102C0ED0(&v47);
        v11 = v26;
        v27 = *v10 * v26;
        v42 = v10[1] * v11;
        v36 = v11 * v10[2];
        v28 = *(float *)v4 - v27;
        v43 = *((float *)v1 + 215) - v42;
        v37 = *((float *)v1 + 216) - v36;
        v50 = v28;
        v51 = v43;
        v52 = v37;
        v12 = NxPhysics::Instance(&v50, v56, 1, v58, 266);
        NxPhysics::RayCast(v12);
        if ( v59 )
        {
          v13 = (float *)sub_10005AD3(0);
          v29 = *v13 * 0.009999999776482582;
          v44 = v13[1] * 0.009999999776482582;
          v38 = 0.009999999776482582 * v13[2];
          v14 = (float *)sub_10005AD3(0);
          v30 = v29 + *v14;
          v45 = v14[1] + v44;
          v39 = v14[2] + v38;
          v50 = v30;
          v51 = v45;
          v52 = v39;
          v31 = *((float *)v1 + 285) * 0.5;
          v15 = (struct Vector *)sub_10005AD3(0);
          SurfaceDecal::setPosDir(v2, (struct Vector *)&v50, v15, v31);
        }
        (*(void (__thiscall **)(Effect_Base *))(*(_DWORD *)v1 + 108))(v1);
        v60 = -1;
        CollisionInfo::~CollisionInfo((CollisionInfo *)&v57);
      }
      if ( *((_BYTE *)v1 + 1160) )
      {
        v32 = (*((float *)v1 + 282) - *((float *)v1 + 281)) / *((float *)v1 + 282) * *((float *)v1 + 288)
            + *((float *)v1 + 285) * 0.5;
        if ( v32 > 0.0 )
          SurfaceDecal::setSize(v2, v32);
        else
          SurfaceDecal::setSize(v2, 0.0);
      }
      else if ( 0.0 != *((float *)v1 + 288) )
      {
        v21 = *((float *)v1 + 288) * GDeltaTime + *((float *)v1 + 289);
        *((float *)v1 + 289) = v21;
        if ( *((float *)v1 + 285) < (double)v21 )
          *((float *)v1 + 289) = 0.0;
        if ( -*((float *)v1 + 285) > *((float *)v1 + 289) )
          *((float *)v1 + 289) = 0.0;
        v22 = *((float *)v1 + 289) / *((float *)v1 + 288) * *((float *)v1 + 285);
        SurfaceDecal::setSize(v2, v22);
      }
      v16 = *((_DWORD *)v1 + 273) == 0;
      v17 = *((float *)v1 + 276);
      v46 = *((float *)v1 + 274);
      v18 = *((float *)v1 + 277);
      v47 = *((float *)v1 + 275);
      v48 = v17;
      v49 = v18;
      if ( v16 )
      {
        v23 = *((float *)v1 + 278);
        v52 = v46 * v23;
        v53 = v47 * v23;
        v47 = v53;
        v54 = v48 * v23;
        v48 = v54;
        v55 = v23 * v49;
        v49 = v55;
      }
      else
      {
        v49 = *((float *)v1 + 278) * v49;
      }
      *((_DWORD *)v2 + 65) = sub_10005646();
    }
    this = (SurfaceDecal **)v1;
  }
  Effect_Base::Tick((Effect_Base *)this);
}
