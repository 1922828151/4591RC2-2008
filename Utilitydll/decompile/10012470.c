/*
 * func-name: ?load_config@Config@Utility@Outpop@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AAVConfig_Paser@23@@Z
 * func-address: 0x10012470
 * callers: none
 * callees: 0x100122b0
 */

void __thiscall Outpop::Utility::Config::load_config(
        Outpop::Utility::Config *this,
        int a2,
        struct Outpop::Utility::Config_Paser *a3)
{
  bool v4; // cf
  const unsigned __int16 *v5; // eax
  struct DOMDocument *Document; // eax
  struct xercesc_2_5::DOMNode *v7; // eax
  _BYTE v8[116]; // [esp+14h] [ebp-80h] BYREF
  int v9; // [esp+90h] [ebp-4h]

  xercesc_2_5::XMLPlatformUtils::Initialize(xercesc_2_5::XMLUni::fgXercescDefaultLocale, 0, 0, 0);
  xercesc_2_5::XercesDOMParser::XercesDOMParser(
    (xercesc_2_5::XercesDOMParser *)v8,
    0,
    xercesc_2_5::XMLPlatformUtils::fgMemoryManager,
    0);
  v9 = 0;
  xercesc_2_5::AbstractDOMParser::setValidationScheme(v8, 0);
  v4 = *(_DWORD *)(a2 + 24) < 8u;
  v8[16] = 0;
  if ( v4 )
    v5 = (const unsigned __int16 *)(a2 + 4);
  else
    v5 = *(const unsigned __int16 **)(a2 + 4);
  xercesc_2_5::AbstractDOMParser::parse((xercesc_2_5::AbstractDOMParser *)v8, v5);
  Document = xercesc_2_5::AbstractDOMParser::getDocument((xercesc_2_5::AbstractDOMParser *)v8);
  if ( Document )
    v7 = (struct DOMDocument *)((char *)Document + 12);
  else
    v7 = 0;
  Outpop::Utility::Config::process_element(this, v7, a3);
  v9 = -1;
  xercesc_2_5::XercesDOMParser::~XercesDOMParser((xercesc_2_5::XercesDOMParser *)v8);
}
