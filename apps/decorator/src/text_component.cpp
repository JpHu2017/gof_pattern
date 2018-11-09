#include <glog/logging.h>
#include "text_component.h"
namespace gof {
TextComponent::TextComponent() {}
TextComponent::~TextComponent() {}
void TextComponent::draw() {
    LOG(INFO) << "Text component draw.";
}
void TextComponent::resize() {
    LOG(INFO) << "Text component resize.";
}
}