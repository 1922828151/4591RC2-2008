/*
 * func-name: ?RenderBG@CProgressBar@@IAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x10153a50
 * callers: 0x10155030
 * callees: 0x100a5e50, 0x100b5e40, 0x100cdd20, 0x100cdd30
 */

void __thiscall CProgressBar::RenderBG(CProgressBar *this, struct IDirect3DDevice9 *a2, float a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  struct CREElement **v8; // ecx
  struct CREElement *v9; // ebx
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // ebp
  int v13; // ebx
  int v14; // eax
  int v15; // ebp
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // ebx
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // ebp
  int v25; // ebx
  int v26; // eax
  _DWORD *v27; // ebp
  int v28; // ebx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  _DWORD *v32; // eax
  _DWORD *v33; // ebp
  int v34; // ebx
  int v35; // ebx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  _DWORD *v39; // ebx
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // eax
  int v43; // ebp
  int v44; // ebx
  int v45; // ebx
  int v46; // eax
  int v47; // eax
  int v48; // eax
  _DWORD *v49; // ebx
  int v50; // eax
  int v51; // eax
  int v52; // [esp-4h] [ebp-44h]
  int v53; // [esp-4h] [ebp-44h]
  int v54; // [esp-4h] [ebp-44h]
  int v55; // [esp-4h] [ebp-44h]
  int v56; // [esp-4h] [ebp-44h]
  int v57; // [esp+0h] [ebp-40h]
  int v58; // [esp+0h] [ebp-40h]
  int v59; // [esp+0h] [ebp-40h]
  int v60; // [esp+0h] [ebp-40h]
  int v61; // [esp+0h] [ebp-40h]
  int v62; // [esp+0h] [ebp-40h]
  int v63; // [esp+0h] [ebp-40h]
  int v64; // [esp+4h] [ebp-3Ch]
  int v65; // [esp+4h] [ebp-3Ch]
  int v66; // [esp+4h] [ebp-3Ch]
  int v67; // [esp+4h] [ebp-3Ch]
  int v68; // [esp+4h] [ebp-3Ch]
  int v69; // [esp+4h] [ebp-3Ch]
  int v70; // [esp+4h] [ebp-3Ch]
  int v71; // [esp+4h] [ebp-3Ch]
  int v72; // [esp+18h] [ebp-28h]
  int v73; // [esp+18h] [ebp-28h]
  int v74; // [esp+18h] [ebp-28h]
  int v75; // [esp+18h] [ebp-28h]
  int v76; // [esp+18h] [ebp-28h]
  int v77; // [esp+18h] [ebp-28h]
  int v78; // [esp+18h] [ebp-28h]
  int v79; // [esp+18h] [ebp-28h]
  int v80; // [esp+1Ch] [ebp-24h]
  int v81; // [esp+1Ch] [ebp-24h]
  int xLeft; // [esp+20h] [ebp-20h] BYREF
  int yTop; // [esp+24h] [ebp-1Ch]
  int xRight; // [esp+28h] [ebp-18h]
  int yBottom; // [esp+2Ch] [ebp-14h]
  struct tagRECT rc; // [esp+30h] [ebp-10h] BYREF

  v4 = *((_DWORD *)this + 41);
  v5 = *((_DWORD *)this + 42);
  v6 = *((_DWORD *)this + 43);
  xLeft = v4;
  v7 = *((_DWORD *)this + 44);
  yTop = v5;
  v8 = (struct CREElement **)*((_DWORD *)this + 30);
  xRight = v6;
  yBottom = v7;
  v9 = *v8;
  REBlendColor::Blend((struct CREElement *)((char *)*v8 + 36), 0, a3, 0.80000001);
  v64 = yTop + sub_100CDD30((int)v9 + 12);
  v10 = sub_100CDD20((_DWORD *)v9 + 3);
  SetRect(&rc, xLeft, yTop, xLeft + v10, v64);
  CREDialog::DrawSprite(*((CREDialog **)this + 28), v9, &rc, *((float *)this + 132));
  v11 = (_DWORD *)*((_DWORD *)this + 30);
  v12 = v11[2];
  v72 = sub_100CDD20((_DWORD *)(*v11 + 12));
  v13 = sub_100CDD20(&xLeft) - v72;
  v14 = sub_100CDD20((_DWORD *)(v12 + 12));
  v15 = *(_DWORD *)(*((_DWORD *)this + 30) + 4);
  v73 = v13 - v14;
  REBlendColor::Blend((REBlendColor *)(v15 + 36), 0, a3, 0.80000001);
  v16 = **((_DWORD **)this + 30);
  v17 = sub_100CDD30(v15 + 12);
  v65 = yTop + v17;
  v18 = sub_100CDD20((_DWORD *)(v16 + 12));
  v57 = v73 + xLeft + v18;
  v52 = yTop;
  v19 = sub_100CDD20((_DWORD *)(v16 + 12));
  SetRect(&rc, xLeft + v19, v52, v57, v65);
  CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v15, &rc, *((float *)this + 132));
  v20 = *(_DWORD **)(*((_DWORD *)this + 30) + 8);
  REBlendColor::Blend((REBlendColor *)(v20 + 9), 0, a3, 0.80000001);
  v21 = sub_100CDD30((int)(v20 + 3));
  v66 = yTop + v21;
  v58 = xRight;
  v53 = yTop;
  v22 = sub_100CDD20(v20 + 3);
  SetRect(&rc, xRight - v22, v53, v58, v66);
  CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v20, &rc, *((float *)this + 132));
  v23 = (_DWORD *)*((_DWORD *)this + 30);
  v24 = v23[5];
  v74 = sub_100CDD30(*v23 + 12);
  v25 = sub_100CDD30((int)&xLeft) - v74;
  v26 = sub_100CDD30(v24 + 12);
  v27 = *(_DWORD **)(*((_DWORD *)this + 30) + 12);
  v75 = v25 - v26;
  REBlendColor::Blend((REBlendColor *)(v27 + 9), 0, a3, 0.80000001);
  v28 = **((_DWORD **)this + 30);
  v29 = sub_100CDD30(v28 + 12);
  v67 = v75 + yTop + v29;
  v30 = sub_100CDD20(v27 + 3);
  v59 = xLeft + v30;
  v31 = sub_100CDD30(v28 + 12);
  SetRect(&rc, xLeft, yTop + v31, v59, v67);
  CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v27, &rc, *((float *)this + 132));
  v32 = (_DWORD *)*((_DWORD *)this + 30);
  v33 = (_DWORD *)v32[4];
  v80 = v32[7];
  v76 = sub_100CDD30(v32[2] + 12);
  v34 = sub_100CDD30((int)&xLeft) - v76;
  v77 = v34 - sub_100CDD30(v80 + 12);
  REBlendColor::Blend((REBlendColor *)(v33 + 9), 0, a3, 0.80000001);
  v35 = *(_DWORD *)(*((_DWORD *)this + 30) + 8);
  v36 = sub_100CDD30(v35 + 12);
  v68 = v77 + yTop + v36;
  v60 = xRight;
  v37 = sub_100CDD30(v35 + 12);
  v54 = yTop + v37;
  v38 = sub_100CDD20(v33 + 3);
  SetRect(&rc, xRight - v38, v54, v60, v68);
  CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v33, &rc, *((float *)this + 132));
  v39 = *(_DWORD **)(*((_DWORD *)this + 30) + 20);
  REBlendColor::Blend((REBlendColor *)(v39 + 9), 0, a3, 0.80000001);
  v69 = yBottom;
  v40 = sub_100CDD20(v39 + 3);
  v61 = xLeft + v40;
  v41 = sub_100CDD30((int)(v39 + 3));
  SetRect(&rc, xLeft, yBottom - v41, v61, v69);
  CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v39, &rc, *((float *)this + 132));
  v42 = (_DWORD *)*((_DWORD *)this + 30);
  v43 = v42[6];
  v78 = v42[7];
  v81 = sub_100CDD20((_DWORD *)(v42[5] + 12));
  v44 = sub_100CDD20(&xLeft) - v81;
  v79 = v44 - sub_100CDD20((_DWORD *)(v78 + 12));
  REBlendColor::Blend((REBlendColor *)(v43 + 36), 0, a3, 0.80000001);
  v45 = *(_DWORD *)(*((_DWORD *)this + 30) + 20);
  v70 = yBottom;
  v46 = sub_100CDD20((_DWORD *)(v45 + 12));
  v62 = v79 + xLeft + v46;
  v47 = sub_100CDD30(v43 + 12);
  v55 = yBottom - v47;
  v48 = sub_100CDD20((_DWORD *)(v45 + 12));
  SetRect(&rc, xLeft + v48, v55, v62, v70);
  CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v43, &rc, *((float *)this + 132));
  v49 = *(_DWORD **)(*((_DWORD *)this + 30) + 28);
  REBlendColor::Blend((REBlendColor *)(v49 + 9), 0, a3, 0.80000001);
  v71 = yBottom;
  v63 = xRight;
  v50 = sub_100CDD30((int)(v49 + 3));
  v56 = yBottom - v50;
  v51 = sub_100CDD20(v49 + 3);
  SetRect(&rc, xRight - v51, v56, v63, v71);
  CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v49, &rc, *((float *)this + 132));
}
