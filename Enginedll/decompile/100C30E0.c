/*
 * func-name: ?RenderIndicator@CMLIMEEditBox@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100c30e0
 * callers: none
 * callees: 0x100a5e50, 0x100b5e40, 0x100b66a0, 0x100b6890
 */

void __thiscall CMLIMEEditBox::RenderIndicator(CMLIMEEditBox *this, struct IDirect3DDevice9 *a2, float a3)
{
  float *v4; // edi
  LONG v5; // edx
  LONG v6; // ecx
  unsigned int v7; // eax
  const wchar_t *v8; // ebp
  int v9; // [esp+4h] [ebp-44h]
  float v10; // [esp+18h] [ebp-30h]
  float v11; // [esp+1Ch] [ebp-2Ch]
  float v12; // [esp+20h] [ebp-28h]
  float v13; // [esp+24h] [ebp-24h]
  struct tagRECT rc; // [esp+28h] [ebp-20h] BYREF
  struct tagRECT v15; // [esp+38h] [ebp-10h] BYREF

  v4 = *(float **)(*((_DWORD *)this + 30) + 36);
  REBlendColor::Blend((REBlendColor *)(v4 + 9), 0, a3, 0.69999999);
  CREDialog::DrawSprite(
    *((CREDialog **)this + 28),
    (struct CREElement *)v4,
    (struct tagRECT *)((char *)this + 980),
    1.0);
  v5 = *((_DWORD *)this + 246);
  v6 = *((_DWORD *)this + 245);
  rc.right = *((_DWORD *)this + 247);
  v9 = -*((_DWORD *)this + 140);
  rc.top = v5;
  rc.left = v6;
  rc.bottom = *((_DWORD *)this + 248);
  InflateRect(&rc, v9, v9);
  if ( CMLIMEEditBox::s_ImeState == 1 && CMLIMEEditBox::s_bEnableImeSystem )
    v7 = *((_DWORD *)this + 241);
  else
    v7 = *((_DWORD *)this + 242);
  v10 = (double)BYTE2(v7) * 0.003921568859368563;
  v4[45] = v10;
  v11 = (double)BYTE1(v7) * 0.003921568859368563;
  v4[46] = v11;
  v12 = (double)(unsigned __int8)v7 * 0.003921568859368563;
  v4[47] = v12;
  v13 = 0.003921568859368563 * (double)HIBYTE(v7);
  v4[48] = v13;
  v8 = CMLIMEEditBox::s_wszCurrIndicator;
  memset(&v15, 0, sizeof(v15));
  if ( !CMLIMEEditBox::s_bEnableImeSystem )
    v8 = (const wchar_t *)&CMLIMEEditBox::s_aszIndicator;
  CREDialog::CalcTextRect(*((CREDialog **)this + 28), v8, (struct CREElement *)v4, &v15, -1);
  CREDialog::DrawTextW(*((CREDialog **)this + 28), v8, (struct CREElement *)v4, &rc, 0, -1);
}
