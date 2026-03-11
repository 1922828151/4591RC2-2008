/*
 * func-name: sub_100EE130
 * func-address: 0x100ee130
 * callers: 0x10003d0f
 * callees: 0x10002b53, 0x10005f33, 0x1000a097, 0x102c9fe0
 */

int __thiscall sub_100EE130(int this, int a2)
{
  int (__cdecl *v3)(); // ebp
  double v4; // st7
  int v5; // eax
  double v6; // st6
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // edi
  double v11; // st5
  double v12; // st6
  double v13; // st5
  double v14; // st4
  double v15; // st3
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  double v19; // st7
  double v20; // rtt
  double v21; // st4
  int v22; // eax
  bool v23; // cc
  int v24; // eax
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // eax
  int v30; // [esp+40h] [ebp-64h]
  int v31; // [esp+44h] [ebp-60h]
  int v32; // [esp+48h] [ebp-5Ch]
  int v33; // [esp+60h] [ebp-44h]
  float v34; // [esp+60h] [ebp-44h]
  float v35; // [esp+60h] [ebp-44h]
  float v36; // [esp+64h] [ebp-40h]
  float v37; // [esp+68h] [ebp-3Ch]
  float v38; // [esp+6Ch] [ebp-38h]
  int v39; // [esp+70h] [ebp-34h]
  float v40; // [esp+70h] [ebp-34h]
  float v41; // [esp+74h] [ebp-30h]
  int v42; // [esp+78h] [ebp-2Ch]
  float v43; // [esp+7Ch] [ebp-28h]
  int v44; // [esp+7Ch] [ebp-28h]
  float v45; // [esp+80h] [ebp-24h]
  float v46; // [esp+80h] [ebp-24h]
  int v47; // [esp+80h] [ebp-24h]
  float v48; // [esp+84h] [ebp-20h]
  float v49; // [esp+84h] [ebp-20h]
  float v50; // [esp+84h] [ebp-20h]
  int v51; // [esp+84h] [ebp-20h]
  int v52; // [esp+84h] [ebp-20h]
  float v53; // [esp+88h] [ebp-1Ch]
  float v54; // [esp+8Ch] [ebp-18h]
  float v55; // [esp+8Ch] [ebp-18h]
  float v56; // [esp+90h] [ebp-14h]
  float v57; // [esp+94h] [ebp-10h]
  float v58; // [esp+94h] [ebp-10h]
  int v59; // [esp+98h] [ebp-Ch] BYREF
  float v60; // [esp+9Ch] [ebp-8h]

  if ( *(_BYTE *)(this + 4) )
  {
    v3 = Canvas::Instance;
    v59 = (int)((double)*(int *)(Canvas::Instance() + 64) * 0.5);
    v4 = 0.5;
    v5 = (int)((double)*(int *)(Canvas::Instance() + 68) * 0.5);
    v6 = *(float *)(this + 16);
    v60 = *(float *)&v5;
    if ( v6 <= 0.00009999999747378752 )
    {
      if ( *(_BYTE *)(this + 6) && *(_DWORD *)(this + 240) )
      {
        v7 = *(_DWORD *)(this + 240);
        v45 = (double)v59 - (double)*(int *)(v7 + 80) * 0.5;
        v48 = (double)SLODWORD(v60) - 0.5 * (double)*(int *)(v7 + 84);
        v8 = Canvas::Instance();
        (*(void (__thiscall **)(int, _DWORD, int, int, _DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)v8 + 68))(
          v8,
          *(_DWORD *)(this + 24),
          (int)v45,
          (int)v48,
          *(_DWORD *)(*(_DWORD *)(this + 240) + 80),
          *(_DWORD *)(*(_DWORD *)(this + 240) + 84),
          *(_DWORD *)(this + 240),
          5,
          6);
        v4 = 0.5;
      }
      if ( *(_DWORD *)(this + 120) )
      {
        v9 = *(_DWORD *)(this + 120);
        v10 = -1;
        v33 = -1;
        v49 = (float)*(int *)(v9 + 80);
        v11 = v49;
        v12 = 0.25;
        v38 = (double)v59 - v49 * 0.25;
        v50 = (float)*(int *)(v9 + 84);
        v37 = (double)SLODWORD(v60) - v50 * 0.25;
        v43 = v11 * v4;
        v46 = v50 * v4;
        v36 = *(float *)(this + 12) * *(float *)(this + 8);
        *(float *)(v9 + 68) = 0.5;
        *(float *)(*(_DWORD *)(this + 120) + 72) = 0.5;
        v13 = v38;
        v14 = v37;
        v15 = v36;
        v16 = 1;
        v51 = 1;
        while ( 1 )
        {
          v17 = -1;
          v39 = -1;
          v42 = v16;
          v53 = (double)(v10 + 1) * v12;
          while ( 1 )
          {
            if ( *(_DWORD *)(this + 20) == 1 )
            {
              v18 = *(_DWORD *)(this + 120);
              v41 = v13 + ((double)*(int *)(v18 + 80) * v12 + v15) * (double)v33;
              v19 = (v15 + (double)*(int *)(v18 + 84) * v12) * (double)v39 + v14;
            }
            else if ( v42 <= 0 )
            {
              v20 = v14;
              v21 = (v4 * v46 + v15) * (double)v33;
              v19 = v20;
              v41 = v13 + v21;
            }
            else
            {
              v41 = v13;
              v19 = v14 + (v15 + v4 * v43) * (double)v39;
            }
            v40 = v19;
            *(float *)(*(_DWORD *)(this + 120) + 60) = v53;
            v54 = v12 * (double)(v17 + 1);
            *(float *)(*(_DWORD *)(this + 120) + 64) = v54;
            v22 = v3();
            (*(void (__thiscall **)(int, _DWORD, int, int, int, int, _DWORD, int, int))(*(_DWORD *)v22 + 68))(
              v22,
              *(_DWORD *)(this + 24),
              (int)v41,
              (int)v40,
              (int)v43,
              (int)v46,
              *(_DWORD *)(this + 120),
              5,
              6);
            v3 = Canvas::Instance;
            v17 += 2;
            v42 += 2 * v33;
            v39 = v17;
            if ( v17 >= 2 )
              break;
            v14 = v37;
            v4 = 0.5;
            v12 = 0.25;
            v15 = v36;
            v13 = v38;
          }
          v16 = v51 - 2;
          v10 = v33 + 2;
          v23 = v51 - 2 <= -2;
          v33 += 2;
          v51 -= 2;
          if ( v23 )
            break;
          v14 = v37;
          v4 = 0.5;
          v12 = 0.25;
          v15 = v36;
          v13 = v38;
        }
        v4 = 0.5;
      }
      if ( *(_DWORD *)(this + 300) && *(_DWORD *)(this + 360) && *(float *)(this + 56) >= 0.0 )
      {
        v24 = *(_DWORD *)(this + 300);
        v57 = (float)*(int *)(v24 + 80);
        v55 = (double)v59 - v4 * v57;
        v56 = (float)(LODWORD(v60) + 30);
        v34 = v57;
        v58 = (float)*(int *)(v24 + 84);
        v25 = v3();
        v52 = (int)v56;
        v47 = (int)v55;
        (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, int, int))(*(_DWORD *)v25 + 68))(
          v25,
          -1,
          v47,
          v52,
          (int)v34,
          (int)v58,
          *(_DWORD *)(this + 360),
          5,
          6);
        *(float *)(*(_DWORD *)(this + 300) + 68) = *(float *)(this + 56);
        v44 = *(_DWORD *)(this + 32);
        v35 = *(float *)(this + 56) * v34;
        if ( *(_BYTE *)(this + 60) )
          v44 = *(_DWORD *)(this + 28);
        v26 = v3();
        (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, int, int))(*(_DWORD *)v26 + 68))(
          v26,
          v44,
          v47,
          v52,
          (int)v35,
          (int)v58,
          *(_DWORD *)(this + 300),
          5,
          6);
      }
      if ( *(_BYTE *)(this + 5) && *(_DWORD *)(this + 180) )
      {
        v30 = *(_DWORD *)(this + 44);
        v31 = *(_DWORD *)(this + 48);
        v32 = *(_DWORD *)(this + 52);
        CameraHandler::Instance();
        CameraHandler::GetCoords_ScreenFromWorld((int)&v59, v30, v31, v32, 1);
        v27 = v3();
        v28 = *(_DWORD *)(this + 180);
        (*(void (__thiscall **)(int, _DWORD, int, int, _DWORD, _DWORD, int, int, int))(*(_DWORD *)v27 + 68))(
          v27,
          *(_DWORD *)(this + 28),
          (int)(*(float *)&v59 - 0.5 * (double)*(int *)(v28 + 80)),
          (int)(v60 - (double)*(int *)(v28 + 84) * 0.5),
          *(_DWORD *)(v28 + 80),
          *(_DWORD *)(v28 + 84),
          v28,
          5,
          6);
      }
    }
  }
  return j_nullsub_74(a2);
}
