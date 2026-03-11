/*
 * func-name: ?DrawAxisIcon@Gizmo@@QAEXAAVCamera@@@Z
 * func-address: 0x10093cc0
 * callers: 0x10088cd0
 * callees: 0x10064610, 0x10092020, 0x10092b40, 0x101189f0, 0x101780e0, 0x10178c20, 0x1017eaef
 */

void __thiscall Gizmo::DrawAxisIcon(Gizmo *this, struct Camera *a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  double v7; // st7
  double Scale; // st7
  float v9; // edi
  unsigned int v10; // esi
  float v11; // ebp
  struct RenderDevice *v12; // eax
  int (__thiscall *v13)(_DWORD); // eax
  char *v14; // esi
  double v15; // st7
  double v16; // st7
  struct RenderDevice *v17; // eax
  int v18; // esi
  float v19; // [esp+7Ch] [ebp-C8h]
  double v21; // [esp+94h] [ebp-B0h]
  unsigned __int64 v22; // [esp+9Ch] [ebp-A8h] BYREF
  float v23; // [esp+A4h] [ebp-A0h]
  double v24; // [esp+A8h] [ebp-9Ch]
  float v25; // [esp+B0h] [ebp-94h]
  double v26; // [esp+B4h] [ebp-90h]
  float v27; // [esp+BCh] [ebp-88h]
  float v28; // [esp+C0h] [ebp-84h] BYREF
  float v29; // [esp+C4h] [ebp-80h]
  float v30; // [esp+C8h] [ebp-7Ch]
  float v31; // [esp+CCh] [ebp-78h] BYREF
  float v32; // [esp+D0h] [ebp-74h]
  float v33; // [esp+D4h] [ebp-70h]
  int v34; // [esp+D8h] [ebp-6Ch]
  float v35; // [esp+DCh] [ebp-68h] BYREF
  float v36; // [esp+E0h] [ebp-64h]
  double v37; // [esp+E4h] [ebp-60h]
  double v38; // [esp+ECh] [ebp-58h]
  float v39; // [esp+F8h] [ebp-4Ch]
  float v40; // [esp+FCh] [ebp-48h]
  float v41[16]; // [esp+104h] [ebp-40h] BYREF

  Gizmo::UpdateScreenSpaceMatrices(this, a2);
  v3 = *((_DWORD *)Canvas::Instance() + 15);
  (*(void (__stdcall **)(int, int))(*(_DWORD *)v3 + 52))(v3, 1);
  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 44))(v3, 1.0);
  v4 = (*(int (__stdcall **)(int))(*(_DWORD *)v3 + 16))(v3);
  if ( v4 < 0 )
  {
    v5 = *(_DWORD *)dword_11249F38;
    v6 = sub_1017EAEF(v4);
    (*(void (**)(void *, const char *, ...))(v5 + 4))(dword_11249F38, " Error: %s, in: line->Begin()", v6);
  }
  *(float *)&v24 = *((float *)a2 + 94) * 10.0;
  *((float *)&v24 + 1) = *((float *)a2 + 95) * 10.0;
  v7 = 10.0 * *((float *)a2 + 96);
  qmemcpy(v41, (char *)a2 + 220, sizeof(v41));
  v25 = v7;
  sub_10178C20(v41);
  *(float *)&v26 = v41[12] + *(float *)&v24;
  *((float *)&v26 + 1) = v41[13] + *((float *)&v24 + 1);
  v27 = v41[14] + v25;
  Scale = Gizmo::GetScale(this);
  v9 = *((float *)&v26 + 1);
  v10 = LODWORD(v26);
  v11 = v27;
  v32 = *((float *)&v26 + 1);
  v33 = v27;
  v28 = *(float *)&v26;
  v30 = v27;
  v24 = v26;
  *(float *)&v34 = Scale / 2.769999980926514;
  v31 = *(float *)&v26 + *(float *)&v34;
  v29 = *((float *)&v26 + 1) + *(float *)&v34;
  v25 = *(float *)&v34 + v27;
  v35 = 0.0;
  v36 = 0.0;
  *(float *)&v37 = 0.0;
  *((float *)&v37 + 1) = 0.0;
  LODWORD(v26) = RenderDevice::Instance();
  v12 = RenderDevice::Instance();
  v34 = 30 - (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v12 + 296))(v12) / 2;
  v13 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v26) + 300);
  *(float *)&v38 = (float)v34;
  LODWORD(v26) = v13(LODWORD(v26)) / 2 - 25;
  *((float *)&v38 + 1) = (float)SLODWORD(v26);
  *(double *)&v22 = COERCE_DOUBLE(__PAIR64__(HIDWORD(v26), v10));
  v14 = (char *)this + 188;
  v23 = v27;
  D3DXVec3TransformCoord(&v22, &v22, (char *)this + 188);
  v21 = *(float *)&v38;
  v15 = *(float *)&v38 + *(float *)&v22;
  *(float *)&v22 = v31;
  v39 = v15;
  v26 = *((float *)&v38 + 1);
  v16 = *((float *)&v38 + 1) + *((float *)&v22 + 1);
  *((float *)&v22 + 1) = v9;
  v40 = v16;
  v23 = v11;
  D3DXVec3TransformCoord(&v22, &v22, v14);
  v31 = v28;
  *(float *)&v38 = *(float *)&v22 + v21;
  v32 = v29;
  *((float *)&v38 + 1) = *((float *)&v22 + 1) + v26;
  v33 = v11;
  D3DXVec3TransformCoord(&v31, &v31, v14);
  v28 = *(float *)&v24;
  *(float *)&v22 = v31 + v21;
  v29 = v9;
  *((float *)&v22 + 1) = v32 + v26;
  v30 = v25;
  D3DXVec3TransformCoord(&v28, &v28, v14);
  *(float *)&v24 = v28 + v21;
  v35 = v39;
  v36 = v40;
  v37 = v38;
  *((float *)&v24 + 1) = v29 + v26;
  (*(void (__stdcall **)(int, float *, int, int))(*(_DWORD *)v3 + 20))(v3, &v35, 2, -65536);
  v37 = *(double *)&v22;
  (*(void (__stdcall **)(int, float *, int, int))(*(_DWORD *)v3 + 20))(v3, &v35, 2, -16711936);
  v37 = v24;
  (*(void (__stdcall **)(int, float *, int, int))(*(_DWORD *)v3 + 20))(v3, &v35, 2, -16776961);
  (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 68))(v3);
  v17 = RenderDevice::Instance();
  v18 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v17 + 392))(v17);
  *(float *)&v21 = *((float *)&v38 + 1) - 8.0;
  (*(void (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD, const char *))(*(_DWORD *)v18 + 44))(
    v18,
    0,
    -65536,
    LODWORD(v38),
    LODWORD(v21),
    "x");
  *(float *)&v21 = *((float *)&v24 + 1) - 8.0;
  (*(void (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD, const char *))(*(_DWORD *)v18 + 44))(
    v18,
    0,
    -16776961,
    LODWORD(v24),
    LODWORD(v21),
    "z");
  *(float *)&v21 = *((float *)&v22 + 1) - 14.0;
  v19 = *(float *)&v21;
  *(float *)&v21 = *(float *)&v22 - 1.5;
  (*(void (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD, const char *))(*(_DWORD *)v18 + 44))(
    v18,
    0,
    -16711936,
    LODWORD(v21),
    LODWORD(v19),
    "y");
}
