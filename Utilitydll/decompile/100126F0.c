/*
 * func-name: ?load_config@Config2@Utility@Outpop@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100126f0
 * callers: none
 * callees: 0x100127d0
 */

void __thiscall Outpop::Utility::Config2::load_config(Outpop::Utility::Config2 *this, int a2)
{
  bool v3; // cf
  const char *v4; // eax
  struct DOMDocument *Document; // eax
  _BYTE v6[116]; // [esp+14h] [ebp-80h] BYREF
  int v7; // [esp+90h] [ebp-4h]

  xercesc_2_5::XMLPlatformUtils::Initialize(xercesc_2_5::XMLUni::fgXercescDefaultLocale, 0, 0, 0);
  xercesc_2_5::XercesDOMParser::XercesDOMParser(
    (xercesc_2_5::XercesDOMParser *)v6,
    0,
    xercesc_2_5::XMLPlatformUtils::fgMemoryManager,
    0);
  v7 = 0;
  xercesc_2_5::AbstractDOMParser::setValidationScheme(v6, 0);
  v3 = *(_DWORD *)(a2 + 24) < 0x10u;
  v6[16] = 0;
  if ( v3 )
    v4 = (const char *)(a2 + 4);
  else
    v4 = *(const char **)(a2 + 4);
  xercesc_2_5::AbstractDOMParser::parse((xercesc_2_5::AbstractDOMParser *)v6, v4);
  Document = xercesc_2_5::AbstractDOMParser::getDocument((xercesc_2_5::AbstractDOMParser *)v6);
  if ( Document )
    Outpop::Utility::Config2::process_element(this, (struct DOMDocument *)((char *)Document + 12));
  v7 = -1;
  xercesc_2_5::XercesDOMParser::~XercesDOMParser((xercesc_2_5::XercesDOMParser *)v6);
}
