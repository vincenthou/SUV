(function(){
    var index = {};
    index.init = function() {
        this.initSlider();
    };

    index.initSlider = function() {
        var self = this;
        this.slider = $('#slider');
        this.slider.cycle({ 
            fx:     self.slider.parent().attr('data-effect'),
            timeout: 4000,
            prev:   '#prev',
            next:   '#next'
        });
    };

    index.bindHandlers = function() {
        
    };

    if ('undefined' === typeof(SUV)) {
        SUV = {};
    }
    SUV.index = index;
})();