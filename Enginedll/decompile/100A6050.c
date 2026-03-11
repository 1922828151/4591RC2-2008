/*
 * func-name: ?Refresh@CREElement@@QAEXXZ
 * func-address: 0x100a6050
 * callers: 0x100aa0d0
 * callees: none
 */

void __thiscall CREElement::Refresh(CREElement *this)
{
  unsigned int v1; // eax
  double v2; // st6
  unsigned int v3; // eax
  float v4; // [esp+4h] [ebp-10h]
  float v5; // [esp+4h] [ebp-10h]
  float v6; // [esp+8h] [ebp-Ch]
  float v7; // [esp+8h] [ebp-Ch]
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+Ch] [ebp-8h]
  float v10; // [esp+10h] [ebp-4h]
  float v11; // [esp+10h] [ebp-4h]

  v1 = *((_DWORD *)this + 11);
  v4 = (double)BYTE2(v1) * 0.003921568859368563;
  v6 = (double)BYTE1(v1) * 0.003921568859368563;
  *((float *)this + 25) = v4;
  *((float *)this + 26) = v6;
  v8 = (double)(unsigned __int8)v1 * 0.003921568859368563;
  v2 = (double)HIBYTE(v1);
  *((float *)this + 27) = v8;
  v3 = *((_DWORD *)this + 31);
  v10 = v2 * 0.003921568859368563;
  *((float *)this + 28) = v10;
  v5 = (double)BYTE2(v3) * 0.003921568859368563;
  v7 = (double)BYTE1(v3) * 0.003921568859368563;
  *((float *)this + 45) = v5;
  *((float *)this + 46) = v7;
  v9 = (double)(unsigned __int8)v3 * 0.003921568859368563;
  *((float *)this + 47) = v9;
  v11 = 0.003921568859368563 * (double)HIBYTE(v3);
  *((float *)this + 48) = v11;
}
