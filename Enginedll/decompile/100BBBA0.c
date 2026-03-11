/*
 * func-name: ?Render@CREButton@@UAEXPAUIDirect3DDevice9@@MUtagRECT@@@Z
 * func-address: 0x100bbba0
 * callers: none
 * callees: 0x100a5e50, 0x100b5280, 0x100b6890, 0x100cdd40, 0x101a26c0
 */

void __thiscall CREButton::Render(CREButton *this, struct IDirect3DDevice9 *a2, float a3, struct tagRECT a4)
{
  int *v5; // edi
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // ecx
  double v9; // st7
  int v10; // ecx
  double v11; // st7
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  LONG top; // ecx
  LONG right; // edx
  LONG bottom; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // edx
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  struct CREElement **v34; // eax
  struct CREElement *v35; // esi
  int v36; // eax
  double v37; // st7
  int v38; // edi
  const wchar_t *v39; // ebp
  int v40; // [esp+20h] [ebp-9Ch]
  int v41; // [esp+24h] [ebp-98h]
  int v42; // [esp+24h] [ebp-98h]
  float v43; // [esp+24h] [ebp-98h]
  struct tagRECT rc; // [esp+28h] [ebp-94h] BYREF
  int v45; // [esp+38h] [ebp-84h]
  int v46; // [esp+3Ch] [ebp-80h]
  int v47; // [esp+40h] [ebp-7Ch]
  int v48; // [esp+44h] [ebp-78h]
  int v49; // [esp+48h] [ebp-74h]
  int v50; // [esp+4Ch] [ebp-70h]
  int v51; // [esp+50h] [ebp-6Ch]
  int v52; // [esp+54h] [ebp-68h]
  int v53; // [esp+58h] [ebp-64h] BYREF
  int v54; // [esp+5Ch] [ebp-60h]
  int v55; // [esp+60h] [ebp-5Ch]
  int v56[15]; // [esp+74h] [ebp-48h] BYREF
  int v57; // [esp+B8h] [ebp-4h]

  v5 = (int *)((char *)this + 164);
  if ( (unsigned __int8)sub_100CDD40((char *)this + 164, &a4, &rc) )
  {
    v6 = 0;
    if ( !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    {
      v6 = 2;
    }
    else if ( *((_BYTE *)this + 156) )
    {
      if ( *((_BYTE *)this + 779) )
      {
        v6 = 5;
      }
      else if ( *((_BYTE *)this + 91) )
      {
        v6 = 4;
      }
      else if ( *((_BYTE *)this + 157) )
      {
        v6 = 6;
      }
      else if ( *((_BYTE *)this + 92) )
      {
        v6 = 3;
      }
    }
    else
    {
      v6 = 1;
    }
    if ( *((_BYTE *)this + 516) )
      v7 = (_DWORD *)*((_DWORD *)this + v6 + 122);
    else
      v7 = *(_DWORD **)(*((_DWORD *)this + 30) + 4);
    if ( v7 )
    {
      v8 = *((_DWORD *)this + 43) - *((_DWORD *)this + 41);
      v53 = (int)((double)(rc.left - *v5) / (double)v8 * (double)(v7[5] - v7[3]) + (double)(int)v7[3]);
      v9 = (double)(rc.right - rc.left) / (double)v8 * (double)(v7[5] - v7[3]) + (double)v53;
      v10 = *((_DWORD *)this + 44) - *((_DWORD *)this + 42);
      v55 = (int)v9;
      v11 = (double)(rc.top - *((_DWORD *)this + 42)) / (double)v10 * (double)(v7[6] - v7[4]) + (double)(int)v7[4];
      v12 = *((_DWORD *)this + 44) - *((_DWORD *)this + 42);
      v54 = (int)v11;
      v13 = (int)((double)(rc.bottom - rc.top) / (double)v12 * (double)(v7[6] - v7[4]) + (double)(int)v11);
      v14 = *((_DWORD *)this + 42);
      v45 = *v5;
      v15 = *((_DWORD *)this + 43);
      v46 = v14;
      v16 = *((_DWORD *)this + 44);
      v47 = v15;
      v17 = v7[3];
      v48 = v16;
      v18 = v7[4];
      v49 = v17;
      v19 = v7[5];
      v50 = v18;
      v20 = v7[6];
      v51 = v19;
      top = rc.top;
      v52 = v20;
      right = rc.right;
      *v5 = rc.left;
      *((_DWORD *)this + 42) = top;
      bottom = rc.bottom;
      *((_DWORD *)this + 43) = right;
      v24 = v53;
      *((_DWORD *)this + 44) = bottom;
      v25 = v54;
      v7[3] = v24;
      v26 = v55;
      v7[4] = v25;
      v7[5] = v26;
      v7[6] = v13;
      std::wstring::wstring(&v53, (char *)this + 532);
      v57 = 0;
      std::wstring::clear((char *)this + 532);
      (*(void (__thiscall **)(CREButton *, struct IDirect3DDevice9 *, _DWORD))(*(_DWORD *)this + 20))(
        this,
        a2,
        LODWORD(a3));
      std::wstring::operator=((char *)this + 532, &v53);
      v27 = v50;
      v28 = v51;
      v7[3] = v49;
      v29 = v52;
      v7[4] = v27;
      v30 = v45;
      v7[5] = v28;
      v31 = v46;
      v7[6] = v29;
      v32 = v47;
      *v5 = v30;
      v33 = v48;
      *((_DWORD *)this + 42) = v31;
      v34 = (struct CREElement **)*((_DWORD *)this + 30);
      *((_DWORD *)this + 43) = v32;
      *((_DWORD *)this + 44) = v33;
      v35 = *v34;
      REBlendColor::Blend((struct CREElement *)((char *)*v34 + 116), 0, a3, 0.2);
      v41 = *((_DWORD *)v35 + 1);
      v40 = *((_DWORD *)this + 28);
      if ( REGetGlobalDialogResourceManager() )
      {
        v42 = *(_DWORD *)(*(_DWORD *)(v40 + 752) + 4 * v41);
        v36 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v42);
        if ( v36 )
        {
          (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)(v36 + 520) + 28))(*(_DWORD *)(v36 + 520), v56);
          v43 = (float)*((int *)this + 42);
          v37 = v43 + ((double)*((int *)this + 44) - v43 - (double)v56[0]) * 0.5;
          SetRect(&rc, *v5, (int)v37, *((_DWORD *)this + 43), (int)v37 + v56[0]);
          v38 = *((_DWORD *)v35 + 2);
          if ( rc.top >= a4.top )
          {
            if ( rc.bottom > a4.bottom )
              rc.bottom = a4.bottom;
          }
          else
          {
            rc.top = a4.top;
          }
          if ( *((_DWORD *)this + 139) < 8u )
            v39 = (const wchar_t *)((char *)this + 536);
          else
            v39 = (const wchar_t *)*((_DWORD *)this + 134);
          CREDialog::DrawTextW(*((CREDialog **)this + 28), v39, v35, &rc, 0, -1);
          *((_DWORD *)v35 + 2) = v38;
        }
      }
      v57 = -1;
      std::wstring::~wstring(&v53);
    }
  }
}
