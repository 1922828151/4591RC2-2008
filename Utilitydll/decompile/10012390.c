/*
 * func-name: ?load_config@Config@Utility@Outpop@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVConfig_Paser@23@@Z
 * func-address: 0x10012390
 * callers: 0x10016760
 * callees: 0x100122b0
 */

void __thiscall Outpop::Utility::Config::load_config(
        Outpop::Utility::Config *this,
        int a2,
        struct Outpop::Utility::Config_Paser *a3)
{
  bool v4; // cf
  const char *v5; // eax
  struct DOMDocument *Document; // eax
  _BYTE v7[116]; // [esp+14h] [ebp-80h] BYREF
  int v8; // [esp+90h] [ebp-4h]

  xercesc_2_5::XMLPlatformUtils::Initialize(xercesc_2_5::XMLUni::fgXercescDefaultLocale, 0, 0, 0);
  xercesc_2_5::XercesDOMParser::XercesDOMParser(
    (xercesc_2_5::XercesDOMParser *)v7,
    0,
    xercesc_2_5::XMLPlatformUtils::fgMemoryManager,
    0);
  v8 = 0;
  xercesc_2_5::AbstractDOMParser::setValidationScheme(v7, 0);
  v4 = *(_DWORD *)(a2 + 24) < 0x10u;
  v7[16] = 0;
  if ( v4 )
    v5 = (const char *)(a2 + 4);
  else
    v5 = *(const char **)(a2 + 4);
  xercesc_2_5::AbstractDOMParser::parse((xercesc_2_5::AbstractDOMParser *)v7, v5);
  Document = xercesc_2_5::AbstractDOMParser::getDocument((xercesc_2_5::AbstractDOMParser *)v7);
  if ( Document )
    Outpop::Utility::Config::process_element(this, (struct DOMDocument *)((char *)Document + 12), a3);
  v8 = -1;
  xercesc_2_5::XercesDOMParser::~XercesDOMParser((xercesc_2_5::XercesDOMParser *)v7);
}
