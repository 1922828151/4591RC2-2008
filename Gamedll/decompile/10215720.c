/*
 * func-name: sub_10215720
 * func-address: 0x10215720
 * callers: 0x1001011d
 * callees: 0x10009e6c, 0x10016513
 */

void __stdcall sub_10215720(Outpop::Utility::Ref_Object *a1)
{
  Outpop::Message::Message *v1; // esi
  int v2; // ecx

  v1 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &a1);
  sub_10009E6C();
  LOBYTE(v2) = Outpop::Message::Message::get_result(v1) == 0;
  j_nullsub_75(v2);
  if ( a1 )
    Outpop::Utility::Ref_Object::release(a1);
}
