/*
 * func-name: ?GetScale@Gizmo@@IAEMXZ
 * func-address: 0x10092020
 * callers: 0x100935b0, 0x10093cc0, 0x10094190, 0x100946e0
 * callees: 0x101189f0, 0x101780e0, 0x10178c20, 0x101a2516
 */

double __thiscall Gizmo::GetScale(Gizmo *this)
{
  struct RenderDevice *v2; // eax
  double v3; // st7
  double v4; // st7
  float v5; // edi
  float v6; // ebp
  float v8; // [esp+30h] [ebp-A0h]
  float v9; // [esp+34h] [ebp-9Ch] BYREF
  float v10; // [esp+38h] [ebp-98h]
  float v11; // [esp+3Ch] [ebp-94h]
  float v12; // [esp+40h] [ebp-90h]
  float v13; // [esp+44h] [ebp-8Ch]
  float v14; // [esp+48h] [ebp-88h]
  float v15; // [esp+4Ch] [ebp-84h]
  float v16; // [esp+50h] [ebp-80h] BYREF
  float v17; // [esp+54h] [ebp-7Ch]
  float v18; // [esp+58h] [ebp-78h]
  float v19; // [esp+5Ch] [ebp-74h]
  float v20; // [esp+60h] [ebp-70h]
  float v21; // [esp+64h] [ebp-6Ch]
  float v22; // [esp+68h] [ebp-68h]
  float v23; // [esp+6Ch] [ebp-64h] BYREF
  float v24; // [esp+70h] [ebp-60h]
  float v25; // [esp+74h] [ebp-5Ch]
  float v26; // [esp+78h] [ebp-58h] BYREF
  float v27; // [esp+7Ch] [ebp-54h]
  float v28; // [esp+80h] [ebp-50h]
  float v29; // [esp+84h] [ebp-4Ch]
  float v30; // [esp+88h] [ebp-48h]
  float v31; // [esp+8Ch] [ebp-44h]
  float v32[16]; // [esp+90h] [ebp-40h] BYREF

  v2 = RenderDevice::Instance();
  v3 = 800.0 / (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v2 + 296))(v2);
  qmemcpy(v32, (char *)this + 48, sizeof(v32));
  v19 = v3;
  sub_10178C20(v32);
  v4 = v32[12] - *((float *)this + 200);
  v12 = v32[12];
  v9 = v4;
  v13 = v32[13];
  v14 = v32[14];
  v10 = v32[13] - *((float *)this + 201);
  v11 = v32[14] - *((float *)this + 202);
  v8 = v10 * v10 + v9 * v9 + v11 * v11;
  v8 = sqrt(v8);
  v8 = v8 * *((float *)this + 87);
  v9 = *((float *)this + 44) * 5.0;
  v10 = *((float *)this + 45) * 5.0;
  v11 = 5.0 * *((float *)this + 46);
  v12 = v32[12] + v9;
  v13 = v10 + v32[13];
  v14 = v11 + v32[14];
  v20 = v12 + v8;
  v15 = v13 + 0.0;
  v16 = v20;
  v17 = v15;
  v8 = v14 + 0.0;
  v18 = v8;
  D3DXVec3TransformCoord(&v16, &v16, (char *)this + 252);
  v5 = v12;
  v6 = v13;
  v23 = v12;
  v24 = v13;
  v25 = v14;
  D3DXVec3TransformCoord(&v23, &v23, (char *)this + 252);
  v29 = v23 - v16;
  v30 = v24 - v17;
  v31 = v25 - v18;
  v9 = v20;
  v21 = v15;
  v10 = v15;
  v22 = v8;
  v11 = v8;
  D3DXVec3TransformCoord(&v9, &v9, (char *)this + 188);
  v26 = v5;
  v27 = v6;
  v28 = v14;
  D3DXVec3TransformCoord(&v26, &v26, (char *)this + 188);
  v16 = v26 - v9;
  v17 = v27 - v10;
  v18 = v28 - v11;
  v8 = v30 * v30 + v29 * v29 + v31 * v31;
  v8 = sqrt(v8);
  v15 = v8;
  v8 = v16 * v16 + v17 * v17 + v18 * v18;
  v8 = sqrt(v8);
  return (float)(v15 / v8 * v19);
}
