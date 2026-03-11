/*
 * func-name: ?estimate_container_is_empty@Sequence_Container@IONetwork@Outpop@@QAE_NXZ
 * func-address: 0x1003d1a0
 * callers: none
 * callees: 0x1003cff0
 */

bool __thiscall Outpop::IONetwork::Sequence_Container::estimate_container_is_empty(
        Outpop::IONetwork::Sequence_Container *this)
{
  Outpop::IONetwork::Sequence_Container *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this;
  Outpop::IONetwork::Sequence_Container::get_is_have_stream(this, (bool *)&v2 + 1, (bool *)&v2 + 2, (bool *)&v2 + 3);
  return !BYTE1(v2) && !BYTE2(v2) && !HIBYTE(v2);
}
