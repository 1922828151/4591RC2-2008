/*
 * func-name: ?PostRender@HookEsbTransport@@UAEXPAVCamera@@@Z_0
 * func-address: 0x1012e290
 * callers: 0x1001102c
 * callees: 0x102c0ed0
 */

void __thiscall HookEsbTransport::PostRender(HookEsbTransport *this, struct Camera *a2)
{
  Editor *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  float *v11; // eax
  int v12; // eax
  int v13; // ebx
  float *v14; // eax
  int v15; // eax
  int v16; // ebx
  float *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  float *v22; // [esp+3Ch] [ebp-44h]
  float *v23; // [esp+3Ch] [ebp-44h]
  float *v24; // [esp+3Ch] [ebp-44h]
  int v25; // [esp+50h] [ebp-30h]
  int v26; // [esp+54h] [ebp-2Ch]
  float v27; // [esp+54h] [ebp-2Ch]
  float v28; // [esp+54h] [ebp-2Ch]
  float v29; // [esp+54h] [ebp-2Ch]
  float v30; // [esp+54h] [ebp-2Ch]
  float v31; // [esp+58h] [ebp-28h]
  float v32; // [esp+58h] [ebp-28h]
  float v33; // [esp+58h] [ebp-28h]
  float v34; // [esp+58h] [ebp-28h]
  float v35; // [esp+58h] [ebp-28h]
  float v36; // [esp+5Ch] [ebp-24h]
  float v37; // [esp+5Ch] [ebp-24h]
  float v38; // [esp+5Ch] [ebp-24h]
  float v39; // [esp+60h] [ebp-20h]
  float v40; // [esp+60h] [ebp-20h]
  float v41; // [esp+60h] [ebp-20h]
  float v42; // [esp+64h] [ebp-1Ch]
  float v43; // [esp+64h] [ebp-1Ch]
  float v44; // [esp+64h] [ebp-1Ch]
  float v45; // [esp+68h] [ebp-18h] BYREF
  float v46; // [esp+6Ch] [ebp-14h]
  float v47; // [esp+70h] [ebp-10h]
  _BYTE v48[12]; // [esp+74h] [ebp-Ch] BYREF

  v3 = (Editor *)Editor::Instance(v25, v26);
  if ( Editor::GetEditorMode(v3) )
  {
    if ( *((_DWORD *)this + 285) )
    {
      v4 = Canvas::Instance();
      (*(void (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)v4 + 144))(
        v4,
        *((_DWORD *)this + 301) + 856,
        *((float *)this + 300),
        0.1,
        -16711936);
      v5 = Canvas::Instance();
      (*(void (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)v5 + 144))(
        v5,
        *((_DWORD *)this + 309) + 856,
        *((float *)this + 308),
        0.1,
        -16711936);
      v6 = Canvas::Instance();
      (*(void (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)v6 + 144))(
        v6,
        *((_DWORD *)this + 317) + 856,
        *((float *)this + 316),
        0.1,
        -16711936);
    }
    v7 = Canvas::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 92))(v7);
    if ( *((_DWORD *)this + 285) )
    {
      v8 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)v8 + 96))(
        v8,
        (char *)this + 856,
        *((_DWORD *)this + 285) + 856,
        -16776961);
      v9 = Canvas::Instance();
      v27 = *((float *)this + 300);
      v10 = v9;
      v11 = (float *)sub_102C0ED0(v48);
      v36 = *v11 * v27;
      v39 = v11[1] * v27;
      v22 = (float *)(*((_DWORD *)this + 301) + 856);
      v42 = v27 * v11[2];
      v28 = *(float *)(*((_DWORD *)this + 301) + 860) + v39;
      v31 = *(float *)(*((_DWORD *)this + 301) + 864) + v42;
      v45 = *v22 + v36;
      v46 = v28;
      v47 = v31;
      (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)v10 + 96))(v10, v22, &v45, -16711936);
      v12 = Canvas::Instance();
      v32 = *((float *)this + 308);
      v13 = v12;
      v14 = (float *)sub_102C0ED0(v48);
      v37 = *v14 * v32;
      v40 = v14[1] * v32;
      v43 = v32 * v14[2];
      v33 = *(float *)(*((_DWORD *)this + 309) + 860) + v40;
      v29 = *(float *)(*((_DWORD *)this + 309) + 864) + v43;
      v23 = (float *)(*((_DWORD *)this + 309) + 856);
      v45 = *v23 + v37;
      v46 = v33;
      v47 = v29;
      (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)v13 + 96))(v13, v23, &v45, -16711936);
      v15 = Canvas::Instance();
      v34 = *((float *)this + 316);
      v16 = v15;
      v17 = (float *)sub_102C0ED0(v48);
      v38 = *v17 * v34;
      v41 = v17[1] * v34;
      v24 = (float *)(*((_DWORD *)this + 317) + 856);
      v44 = v34 * v17[2];
      v35 = *(float *)(*((_DWORD *)this + 317) + 860) + v41;
      v30 = *(float *)(*((_DWORD *)this + 317) + 864) + v44;
      v45 = v38 + *v24;
      v46 = v35;
      v47 = v30;
      (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)v16 + 96))(v16, v24, &v45, -16711936);
    }
    if ( *((_DWORD *)this + 301) )
    {
      v18 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)v18 + 96))(
        v18,
        (char *)this + 856,
        *((_DWORD *)this + 301) + 856,
        -1);
    }
    if ( *((_DWORD *)this + 309) )
    {
      v19 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)v19 + 96))(
        v19,
        (char *)this + 856,
        *((_DWORD *)this + 309) + 856,
        -1);
    }
    if ( *((_DWORD *)this + 317) )
    {
      v20 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)v20 + 96))(
        v20,
        (char *)this + 856,
        *((_DWORD *)this + 317) + 856,
        -1);
    }
    v21 = Canvas::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 100))(v21);
  }
}
