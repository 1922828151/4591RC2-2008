/*
 * func-name: ?make_catalog_type@Message@Outpop@@YAXIAAEAAG@Z
 * func-address: 0x10004ce0
 * callers: none
 * callees: none
 */

void __cdecl Outpop::Message::make_catalog_type(Outpop::Message *this, _BYTE *a2, unsigned __int8 *a3)
{
  *a2 = BYTE2(this);
  *(_WORD *)a3 = (_WORD)this;
}
