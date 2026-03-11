/*
 * func-name: ?make_dt@Logger@Utility@Outpop@@QAEPA_WXZ
 * func-address: 0x100023e0
 * callers: 0x10002f40, 0x10003e80, 0x1000bb00, 0x1000bc60, 0x10018720
 * callees: 0x10005480
 */

wchar_t *__thiscall Outpop::Utility::Logger::make_dt(Outpop::Utility::Logger *this)
{
  wchar_t **v1; // eax

  v1 = (wchar_t **)sub_10005480();
  wstrdate_s(*v1, 0x80u);
  return *(wchar_t **)sub_10005480();
}
