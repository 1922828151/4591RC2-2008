/*
 * func-name: ?OnRender@Gizmo@@QAEXXZ
 * func-address: 0x10094d10
 * callers: 0x10088cd0
 * callees: 0x1004c240, 0x10064610, 0x1007e920, 0x10091db0, 0x10092310, 0x100935b0, 0x100946e0, 0x10178c20, 0x1017eaef
 */

void __thiscall Gizmo::OnRender(Gizmo *this)
{
  struct ID3DXLine *v2; // esi
  int v3; // eax
  void (**v4)(void *, const char *, ...); // edi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  unsigned int v8; // eax
  float v9; // ecx
  void (__stdcall *v10)(struct ID3DXLine *, float *, int, int); // edx
  double v11; // st6
  double v12; // st4
  float v13; // [esp+18h] [ebp-58h]
  float v14; // [esp+18h] [ebp-58h]
  float v15; // [esp+18h] [ebp-58h]
  float v16; // [esp+18h] [ebp-58h]
  float v17; // [esp+18h] [ebp-58h]
  float v18; // [esp+18h] [ebp-58h]
  float v19; // [esp+1Ch] [ebp-54h]
  float v20; // [esp+1Ch] [ebp-54h]
  float v21; // [esp+20h] [ebp-50h]
  float v22; // [esp+24h] [ebp-4Ch] BYREF
  float v23; // [esp+28h] [ebp-48h]
  float v24; // [esp+2Ch] [ebp-44h]
  float v25[16]; // [esp+30h] [ebp-40h] BYREF

  if ( !*((_BYTE *)this + 357) )
  {
    Gizmo::Initialize(this);
    *((_BYTE *)this + 357) = 1;
  }
  qmemcpy(v25, (char *)this + 48, sizeof(v25));
  sub_10178C20(v25);
  v13 = v25[12] - *((float *)this + 200);
  v22 = v13;
  v19 = v25[13] - *((float *)this + 201);
  v23 = v19;
  v21 = v25[14] - *((float *)this + 202);
  v24 = v21;
  sub_1004C240(&v22);
  sub_1004C240((float *)this + 44);
  v14 = *((float *)this + 45) * v23 + v22 * *((float *)this + 44) + *((float *)this + 46) * v24;
  if ( v14 <= -0.25 )
  {
    v2 = (struct ID3DXLine *)*((_DWORD *)Canvas::Instance() + 15);
    (*(void (__stdcall **)(struct ID3DXLine *, int))(*(_DWORD *)v2 + 52))(v2, 1);
    (*(void (__stdcall **)(struct ID3DXLine *, _DWORD))(*(_DWORD *)v2 + 44))(v2, 1.0);
    v3 = (*(int (__stdcall **)(struct ID3DXLine *))(*(_DWORD *)v2 + 16))(v2);
    if ( v3 < 0 )
    {
      v4 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
      v5 = sub_1017EAEF(v3);
      (*v4)(dword_11249F38, " Error: %s, in: line->Begin()", v5);
    }
    v6 = *((_DWORD *)this + 234);
    if ( !v6 || v6 == 2 )
    {
      Gizmo::DoLines(this, v2);
      v10 = *(void (__stdcall **)(struct ID3DXLine *, float *, int, int))(*(_DWORD *)v2 + 20);
      v11 = *((float *)this + 9) - 8.0;
      v15 = v11;
      v25[0] = v15;
      v12 = *((float *)this + 10) - 8.0;
      v16 = v12;
      v25[1] = v16;
      v17 = *((float *)this + 9) + 8.0;
      v25[2] = v17;
      v25[4] = v17;
      v25[3] = v25[1];
      v18 = *((float *)this + 10) + 8.0;
      v25[5] = v18;
      v25[7] = v18;
      v25[6] = v25[0];
      v25[8] = v11 - 1.0;
      v25[9] = v12 - 1.0;
      v10(v2, v25, 5, -256);
    }
    else
    {
      v7 = 0;
      if ( Gizmo::DoCircle(this, v2, 2) )
        v7 = 2;
      if ( Gizmo::DoCircle(this, v2, 4) )
        v7 |= 4u;
      if ( Gizmo::DoCircle(this, v2, 8) )
        v7 |= 8u;
      if ( *((_BYTE *)this + 356) )
      {
        if ( !*((_DWORD *)this + 233) )
        {
          v20 = *((float *)this + 10);
          v22 = *((float *)this + 9) - *((float *)this + 79);
          v23 = v20 - *((float *)this + 80);
          if ( sub_1007E920(&v22) < 70.0 )
            *((_DWORD *)this + 233) = 14;
        }
      }
      else
      {
        *((_DWORD *)this + 233) = v7;
      }
      v8 = *((_DWORD *)this + 233);
      v22 = (float)((v8 >> 1) & 1);
      v23 = (float)((v8 >> 2) & 1);
      v9 = v23;
      *((float *)this + 92) = v22;
      *((float *)this + 93) = v9;
      v24 = (float)((v8 >> 3) & 1);
      *((float *)this + 94) = v24;
    }
    (*(void (__stdcall **)(struct ID3DXLine *))(*(_DWORD *)v2 + 68))(v2);
    if ( !*((_DWORD *)this + 234) )
      Gizmo::DrawObjects(this, *((struct ID3DXMesh **)this + 204));
    if ( *((_DWORD *)this + 234) == 2 )
      Gizmo::DrawObjects(this, *((struct ID3DXMesh **)this + 205));
  }
}
