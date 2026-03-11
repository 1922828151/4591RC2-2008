/*
 * func-name: ?SendPass@CPasswordInputUI@@QAEXXZ_0
 * func-address: 0x10278d90
 * callers: 0x1000998f
 * callees: 0x1000194c, 0x100077ed, 0x1000a0b5, 0x10013647, 0x10015eab
 */

void __thiscall CPasswordInputUI::SendPass(CPasswordInputUI *this)
{
  CDlgMgr *v1; // eax
  Outpop::Utility::Ref_Object *v2; // [esp+14h] [ebp-14h] BYREF
  int Pass; // [esp+18h] [ebp-10h] BYREF
  int v4; // [esp+24h] [ebp-4h]

  Pass = CPasswordInputUI::GetPass(this);
  sub_1000194C(0);
  sub_100077ED((int)&v2, 9, 104, COERCE_INT(0.0), 1, 512);
  v4 = 0;
  sub_10015EAB((int)&Pass);
  j_nullsub_44((int)&v2);
  v1 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::ShowDialog(v1);
  v4 = -1;
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
}
