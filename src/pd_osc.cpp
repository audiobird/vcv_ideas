#include "plugin.hpp"


struct Pd_osc : Module {
	enum ParamId {
		P_0_PARAM,
		P_1_PARAM,
		P_2_PARAM,
		P_3_PARAM,
		P_4_PARAM,
		P_5_PARAM,
		P_6_PARAM,
		P_7_PARAM,
		PARAMS_LEN
	};
	enum InputId {
		IN_0_INPUT,
		IN_1_INPUT,
		IN_2_INPUT,
		IN_3_INPUT,
		IN_4_INPUT,
		IN_5_INPUT,
		IN_6_INPUT,
		IN_7_INPUT,
		INPUTS_LEN
	};
	enum OutputId {
		OUT_0_OUTPUT,
		OUT_1_OUTPUT,
		OUT_2_OUTPUT,
		OUT_3_OUTPUT,
		OUT_4_OUTPUT,
		OUT_5_OUTPUT,
		OUT_6_OUTPUT,
		OUT_7_OUTPUT,
		OUTPUTS_LEN
	};
	enum LightId {
		LIGHTS_LEN
	};

	Pd_osc() {
		config(PARAMS_LEN, INPUTS_LEN, OUTPUTS_LEN, LIGHTS_LEN);
		configParam(P_0_PARAM, 0.f, 1.f, 0.f, "");
		configParam(P_1_PARAM, 0.f, 1.f, 0.f, "");
		configParam(P_2_PARAM, 0.f, 1.f, 0.f, "");
		configParam(P_3_PARAM, 0.f, 1.f, 0.f, "");
		configParam(P_4_PARAM, 0.f, 1.f, 0.f, "");
		configParam(P_5_PARAM, 0.f, 1.f, 0.f, "");
		configParam(P_6_PARAM, 0.f, 1.f, 0.f, "");
		configParam(P_7_PARAM, 0.f, 1.f, 0.f, "");
		configInput(IN_0_INPUT, "");
		configInput(IN_1_INPUT, "");
		configInput(IN_2_INPUT, "");
		configInput(IN_3_INPUT, "");
		configInput(IN_4_INPUT, "");
		configInput(IN_5_INPUT, "");
		configInput(IN_6_INPUT, "");
		configInput(IN_7_INPUT, "");
		configOutput(OUT_0_OUTPUT, "");
		configOutput(OUT_1_OUTPUT, "");
		configOutput(OUT_2_OUTPUT, "");
		configOutput(OUT_3_OUTPUT, "");
		configOutput(OUT_4_OUTPUT, "");
		configOutput(OUT_5_OUTPUT, "");
		configOutput(OUT_6_OUTPUT, "");
		configOutput(OUT_7_OUTPUT, "");
	}

	void process(const ProcessArgs& args) override {
	}
};


struct Pd_oscWidget : ModuleWidget {
	Pd_oscWidget(Pd_osc* module) {
		setModule(module);
		setPanel(createPanel(asset::plugin(pluginInstance, "res/pd_osc.svg")));

		addChild(createWidget<ScrewSilver>(Vec(RACK_GRID_WIDTH, 0)));
		addChild(createWidget<ScrewSilver>(Vec(box.size.x - 2 * RACK_GRID_WIDTH, 0)));
		addChild(createWidget<ScrewSilver>(Vec(RACK_GRID_WIDTH, RACK_GRID_HEIGHT - RACK_GRID_WIDTH)));
		addChild(createWidget<ScrewSilver>(Vec(box.size.x - 2 * RACK_GRID_WIDTH, RACK_GRID_HEIGHT - RACK_GRID_WIDTH)));

		addParam(createParamCentered<RoundBlackKnob>(mm2px(Vec(32.542, 27.737)), module, Pd_osc::P_0_PARAM));
		addParam(createParamCentered<RoundBlackKnob>(mm2px(Vec(46.467, 27.737)), module, Pd_osc::P_1_PARAM));
		addParam(createParamCentered<RoundBlackKnob>(mm2px(Vec(60.392, 27.737)), module, Pd_osc::P_2_PARAM));
		addParam(createParamCentered<RoundBlackKnob>(mm2px(Vec(74.317, 27.737)), module, Pd_osc::P_3_PARAM));
		addParam(createParamCentered<RoundBlackKnob>(mm2px(Vec(88.243, 27.737)), module, Pd_osc::P_4_PARAM));
		addParam(createParamCentered<RoundBlackKnob>(mm2px(Vec(102.168, 27.737)), module, Pd_osc::P_5_PARAM));
		addParam(createParamCentered<RoundBlackKnob>(mm2px(Vec(116.093, 27.737)), module, Pd_osc::P_6_PARAM));
		addParam(createParamCentered<RoundBlackKnob>(mm2px(Vec(130.018, 27.737)), module, Pd_osc::P_7_PARAM));

		addInput(createInputCentered<PJ301MPort>(mm2px(Vec(32.542, 67.16)), module, Pd_osc::IN_0_INPUT));
		addInput(createInputCentered<PJ301MPort>(mm2px(Vec(46.467, 67.16)), module, Pd_osc::IN_1_INPUT));
		addInput(createInputCentered<PJ301MPort>(mm2px(Vec(60.392, 67.16)), module, Pd_osc::IN_2_INPUT));
		addInput(createInputCentered<PJ301MPort>(mm2px(Vec(74.317, 67.16)), module, Pd_osc::IN_3_INPUT));
		addInput(createInputCentered<PJ301MPort>(mm2px(Vec(88.243, 67.16)), module, Pd_osc::IN_4_INPUT));
		addInput(createInputCentered<PJ301MPort>(mm2px(Vec(102.168, 67.16)), module, Pd_osc::IN_5_INPUT));
		addInput(createInputCentered<PJ301MPort>(mm2px(Vec(116.093, 67.16)), module, Pd_osc::IN_6_INPUT));
		addInput(createInputCentered<PJ301MPort>(mm2px(Vec(130.018, 67.16)), module, Pd_osc::IN_7_INPUT));

		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(32.542, 106.583)), module, Pd_osc::OUT_0_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(46.467, 106.583)), module, Pd_osc::OUT_1_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(60.392, 106.583)), module, Pd_osc::OUT_2_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(74.317, 106.583)), module, Pd_osc::OUT_3_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(88.243, 106.583)), module, Pd_osc::OUT_4_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(102.168, 106.583)), module, Pd_osc::OUT_5_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(116.093, 106.583)), module, Pd_osc::OUT_6_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(130.018, 106.583)), module, Pd_osc::OUT_7_OUTPUT));
	}
};


Model* modelPd_osc = createModel<Pd_osc, Pd_oscWidget>("pd_osc");