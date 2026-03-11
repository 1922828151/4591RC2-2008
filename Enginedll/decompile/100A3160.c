/*
 * func-name: ?SetCustomElement@CREControl@@QAEXHPAVCREElement@@@Z
 * func-address: 0x100a3160
 * callers: none
 * callees: 0x101a2534
 */

void __thiscall CREControl::SetCustomElement(CREControl *this, int a2, struct CREElement *a3)
{
  struct CREElement *v4; // edi
  struct CREElement *v5; // eax

  v4 = (struct CREElement *)*((_DWORD *)this + a2 + 122);
  if ( !v4 )
  {
    v5 = (struct CREElement *)operator new(0xC4u);
    if ( v5 )
    {
      *((_BYTE *)v5 + 28) = 0;
      *(_DWORD *)v5 = -1;
    }
    else
    {
      v5 = 0;
    }
    *((_DWORD *)this + a2 + 122) = v5;
    v4 = v5;
  }
  qmemcpy(v4, a3, 0xC4u);
}
