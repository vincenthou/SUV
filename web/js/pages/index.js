(function(){
    var index = {};
    index.init = function() {
        this.initSlider();
        this.bindHandlers();
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
        $('.new-item').click(function(){
            window.location.href = SUV.path.POST_PATH + $(this).attr('data-id');
        });
    };

    if ('undefined' === typeof(SUV)) {
        SUV = {};
    }
    SUV.index = index;
})();