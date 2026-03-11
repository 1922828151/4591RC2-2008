/*
 * func-name: ?RenderIndicator@CREIMEEditBox@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bf3d0
 * callers: none
 * callees: 0x100a5e50, 0x100b5e40, 0x100b66a0, 0x100b6890
 */

void __thiscall CREIMEEditBox::RenderIndicator(CREIMEEditBox *this, struct IDirect3DDevice9 *a2, float a3)
{
  float *v4; // esi
  LONG v5; // edx
  LONG v6; // eax
  LONG v7; // ecx
  unsigned int v8; // eax
  const wchar_t *v9; // ebp
  float v10; // [esp+18h] [ebp-30h]
  float v11; // [esp+1Ch] [ebp-2Ch]
  float v12; // [esp+20h] [ebp-28h]
  float v13; // [esp+24h] [ebp-24h]
  struct tagRECT v14; // [esp+28h] [ebp-20h] BYREF
  struct tagRECT v15; // [esp+38h] [ebp-10h] BYREF

  v4 = *(float **)(*((_DWORD *)this + 30) + 36);
  REBlendColor::Blend((REBlendColor *)(v4 + 9), 0, a3, 0.69999999);
  CREDialog::DrawSprite(
    *((CREDialog **)this + 28),
    (struct CREElement *)v4,
    (struct tagRECT *)((char *)this + 860),
    1.0);
  v5 = *((_DWORD *)this + 216);
  v6 = *((_DWORD *)this + 217);
  v15.left = *((_DWORD *)this + 215);
  v7 = *((_DWORD *)this + 218);
  v15.top = v5;
  v15.right = v6;
  v15.bottom = v7;
  if ( CREIMEEditBox::s_ImeState == 1 && CREIMEEditBox::s_bEnableImeSystem )
    v8 = *((_DWORD *)this + 211);
  else
    v8 = *((_DWORD *)this + 212);
  v10 = (double)BYTE2(v8) * 0.003921568859368563;
  v11 = (double)BYTE1(v8) * 0.003921568859368563;
  v4[45] = v10;
  v4[46] = v11;
  v12 = (double)(unsigned __int8)v8 * 0.003921568859368563;
  v4[47] = v12;
  v13 = 0.003921568859368563 * (double)HIBYTE(v8);
  v4[48] = v13;
  v9 = CREIMEEditBox::s_wszCurrIndicator;
  memset(&v14, 0, sizeof(v14));
  if ( !CREIMEEditBox::s_bEnableImeSystem )
    v9 = CREIMEEditBox::s_aszIndicator;
  CREDialog::CalcTextRect(*((CREDialog **)this + 28), v9, (struct CREElement *)v4, &v14, -1);
  CREDialog::DrawTextW(*((CREDialog **)this + 28), v9, (struct CREElement *)v4, &v15, 0, -1);
}
